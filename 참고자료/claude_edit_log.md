# ANTLR4 C++ 프로젝트 빌드 수정 로그

**작업 날짜:** 2026-01-26
**작업자:** Claude (Sonnet 4.5)
**상태:** ✅ 빌드 성공 및 실행 완료

---

## 요약

ANTLR4 C++ MFC 프로젝트의 다양한 빌드 오류를 수정하여 SqlParserLib 및 ANTLR4TEST 프로젝트가 성공적으로 컴파일되고 실행되도록 했습니다.

---

## 해결한 문제들

### 1. 프로젝트 설정 문제
- ❌ 잘못된 인클루드 경로 (플레이스홀더 값 포함)
- ❌ 라이브러리 의존성 누락
- ❌ 프로젝트 참조 누락
- ❌ 실행 파일 디렉토리에 런타임 DLL 없음

### 2. 헤더 포함 순서 문제
- ❌ MySQLParser.h와 MySQLParserVisitor.h 간 순환 의존성
- ❌ Forward declaration 충돌

### 3. 함수 구현 누락
- ❌ MySQLLexerBase.cpp에 50개 이상의 함수 구현 누락
- ❌ 정적 변수 초기화 누락

### 4. 인코딩 문제
- ❌ 한글 주석으로 인한 컴파일 오류 (Code Page 949 문제)

---

## 수정한 파일 목록

### 1. **ANTLR4TEST\ANTLR4TEST.vcxproj**

**경로:** `H:\Source\GithubDesktop\antlr4_test\ANTLR4TEST\ANTLR4TEST.vcxproj`

#### 변경 사항:

**a) 인클루드 디렉토리 수정 (119, 171번 줄)**
```xml
<!-- 수정 전 -->
<AdditionalIncludeDirectories>$(SolutionDir)SqlParserLib\Source;../vcpkg/installed/x64-windows/include/antlr4-runtime;C:\...\installed\x64-windows\include</AdditionalIncludeDirectories>

<!-- 수정 후 -->
<AdditionalIncludeDirectories>$(SolutionDir)SqlParserLib\Source;$(SolutionDir)vcpkg\installed\x64-windows\include\antlr4-runtime;$(SolutionDir)vcpkg\installed\x64-windows\include</AdditionalIncludeDirectories>
```

**b) 라이브러리 디렉토리 및 의존성 추가 (Debug x64)**
```xml
<Link>
  <SubSystem>Windows</SubSystem>
  <AdditionalLibraryDirectories>$(SolutionDir)vcpkg\installed\x64-windows\debug\lib;$(SolutionDir)x64\Debug</AdditionalLibraryDirectories>
  <AdditionalDependencies>antlr4-runtime.lib;SqlParserLib.lib;%(AdditionalDependencies)</AdditionalDependencies>
</Link>
```

**c) 라이브러리 디렉토리 및 의존성 추가 (Release x64)**
```xml
<Link>
  <SubSystem>Windows</SubSystem>
  <EnableCOMDATFolding>true</EnableCOMDATFolding>
  <OptimizeReferences>true</OptimizeReferences>
  <AdditionalLibraryDirectories>$(SolutionDir)vcpkg\installed\x64-windows\lib;$(SolutionDir)x64\Release</AdditionalLibraryDirectories>
  <AdditionalDependencies>antlr4-runtime.lib;SqlParserLib.lib;%(AdditionalDependencies)</AdditionalDependencies>
</Link>
```

**d) 프로젝트 참조 추가**
```xml
<ItemGroup>
  <ProjectReference Include="..\SqlParserLib\SqlParserLib.vcxproj">
    <Project>{5b004e7a-8f7d-4a72-b657-ac720ef44d42}</Project>
  </ProjectReference>
</ItemGroup>
```

**e) 빌드 후 이벤트 추가 (DLL 자동 복사)**
```xml
<!-- Debug x64 -->
<PostBuildEvent>
  <Command>xcopy /Y /D "$(SolutionDir)vcpkg\installed\x64-windows\debug\bin\antlr4-runtime.dll" "$(OutDir)"</Command>
  <Message>Copying antlr4-runtime.dll to output directory</Message>
</PostBuildEvent>

<!-- Release x64 -->
<PostBuildEvent>
  <Command>xcopy /Y /D "$(SolutionDir)vcpkg\installed\x64-windows\bin\antlr4-runtime.dll" "$(OutDir)"</Command>
  <Message>Copying antlr4-runtime.dll to output directory</Message>
</PostBuildEvent>
```

---

### 2. **SqlParserLib\SqlParserLib.vcxproj**

**경로:** `H:\Source\GithubDesktop\antlr4_test\SqlParserLib\SqlParserLib.vcxproj`

#### 변경 사항:

**디렉토리 이름 및 경로 수정 (121, 140번 줄)**
```xml
<!-- 수정 전 -->
<AdditionalIncludeDirectories>$(ProjectDir)..\Grammars\oracle_gen;$(ProjectDir)..\Grammars\sqlserver_gen;$(ProjectDir)Source\MySQL;$(ProjectDir)..\Grammars\postgres_gen;../vcpkg/installed\x64-windows\include\antlr4-runtime</AdditionalIncludeDirectories>

<!-- 수정 후 -->
<AdditionalIncludeDirectories>$(ProjectDir)..\Grammer\oracle_gen;$(ProjectDir)..\Grammer\sqlserver_gen;$(ProjectDir)Source\MySQL;$(ProjectDir)..\Grammer\postgres_gen;$(SolutionDir)vcpkg\installed\x64-windows\include\antlr4-runtime</AdditionalIncludeDirectories>
```

**이유:** 실제 디렉토리 이름이 `Grammars`가 아니라 `Grammer`이며, 이식성을 위해 `$(SolutionDir)` 매크로 사용

---

### 3. **ANTLR4TEST\ANTLR4TESTDlg.cpp**

**경로:** `H:\Source\GithubDesktop\antlr4_test\ANTLR4TEST\ANTLR4TESTDlg.cpp`

#### 변경 사항:

**중복 코드 제거 (1-67번 줄)**
```cpp
// 수정 전: 중복된 인클루드 및 네임스페이스 선언

// 수정 후: 깔끔한 단일 인클루드 세트
#include "pch.h"
#include "framework.h"
#include "ANTLR4TEST.h"
#include "ANTLR4TESTDlg.h"
#include "afxdialogex.h"

// 모든 ANTLR 관련 헤더를 한 곳에
#include "../Common/Include/AntlrProxy.h"

// 네임스페이스 사용
using namespace antlr4;
using namespace antlrcpptest;

// DEBUG_NEW는 반드시 ANTLR 헤더 뒤에
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
```

---

### 4. **Common\Include\AntlrProxy.h**

**경로:** `H:\Source\GithubDesktop\antlr4_test\Common\Include\AntlrProxy.h`

#### 변경 사항:

**헤더 포함 순서 수정**
```cpp
#pragma once

// 1. Windows 매크로 충돌 방지
#undef min
#undef max
#undef ERROR
#undef NO_ERROR

// 2. ANTLR 런타임 헤더
#include <antlr4-runtime.h>

// 3. 부모 클래스들
#include "MySQL/MySQLLexerBase.h"
#include "MySQL/MySQLParserBase.h"

// 4. 렉서와 파서 (Parser가 Visitor보다 먼저!)
#include "MySQL/MySQLLexer.h"
#include "MySQL/MySQLParser.h"

// 5. 비지터 헤더 (Parser가 완전히 정의된 후에만)
#include "MySQL/MySQLParserVisitor.h"
#include "MySQL/MySQLParserBaseVisitor.h"
```

**주요 변경사항:**
- ✅ Forward declaration 제거 (충돌 발생 원인)
- ✅ 순환 의존성 방지를 위한 올바른 포함 순서
- ✅ 모든 주석 영문 변환

---

### 5. **SqlParserLib\Source\MySQL\MySQLParser.h**

**경로:** `H:\Source\GithubDesktop\antlr4_test\SqlParserLib\Source\MySQL\MySQLParser.h`

#### 변경 사항:

**순환 의존성 제거 (9번 줄)**
```cpp
// 수정 전
#include "antlr4-runtime.h"
#include "MySQLParserBase.h"
#include "MySQLParserVisitor.h"  // ← 순환 의존성 발생

// 수정 후
#include "antlr4-runtime.h"
#include "MySQLParserBase.h"
// 순환 의존성 방지를 위해 Visitor 제거
// #include "MySQLParserVisitor.h"
```

**이유:** MySQLParser.h와 MySQLParserVisitor.h 사이 순환 의존성. Visitor는 최종 프록시 헤더에서만 포함되어야 함.

---

### 6. **SqlParserLib\Source\MySQL\MySQLLexerBase.cpp**

**경로:** `H:\Source\GithubDesktop\antlr4_test\SqlParserLib\Source\MySQL\MySQLLexerBase.cpp`

#### 변경 사항:

**a) 인코딩 문제 해결 - 모든 한글 주석 → 영문 변환**

**수정 전:**
```cpp
// SqlModes 클래스의 정적함수가 있다면...
// 정적 변수 초기화
// 버전 체크
// 토큰 타입 설정 함수들
// Boolean 반환 함수들
```

**수정 후:**
```cpp
// If SqlModes::sqlModeFromString static function exists...
// Static variable initialization
// Version check functions
// Token type setting functions
// Boolean return functions
```

**b) 누락된 변수 초기화 추가 (26번 줄)**
```cpp
MySQLLexerBase::MySQLLexerBase(antlr4::CharStream* input) : antlr4::Lexer(input)
{
    this->serverVersion = 80200;
    this->supportMle = true;
    this->inVersionComment = false;
    this->justEmittedDot = false;  // ← 추가됨
}
```

**c) 정적 변수 초기화 추가 (201-210번 줄)**
```cpp
// Static variable initialization
std::string MySQLLexerBase::longString = "2147483647";
int MySQLLexerBase::longLength = 10;
std::string MySQLLexerBase::signedLongString = "-2147483648";
std::string MySQLLexerBase::longLongString = "9223372036854775807";
int MySQLLexerBase::longLongLength = 19;
std::string MySQLLexerBase::signedLongLongString = "-9223372036854775808";
int MySQLLexerBase::signedLongLongLength = 19;
std::string MySQLLexerBase::unsignedLongLongString = "18446744073709551615";
int MySQLLexerBase::unsignedLongLongLength = 20;
```

**d) 누락된 모든 함수 구현 추가 (212-302번 줄)**

```cpp
// 버전 체크 함수 (16개)
bool MySQLLexerBase::isServerVersionGe80018() { return this->serverVersion >= 80018; }
bool MySQLLexerBase::isServerVersionLt80021() { return this->serverVersion < 80021; }
bool MySQLLexerBase::isServerVersionGe80021() { return this->serverVersion >= 80021; }
// ... (13개 추가 버전 체크 함수)

// 토큰 타입 설정 함수 (43개)
void MySQLLexerBase::doLogicalOr() { setType(determineFunction(MySQLLexer::LOGICAL_OR_OPERATOR)); }
void MySQLLexerBase::doIntNumber() { setType(determineNumericType(getText())); }
void MySQLLexerBase::doAdddate() { setType(determineFunction(MySQLLexer::ADDDATE_SYMBOL)); }
// ... (40개 추가 토큰 타입 함수)

// Boolean 반환 함수 (9개)
bool MySQLLexerBase::doDollarQuotedStringText() { return supportMle; }
bool MySQLLexerBase::isVersionComment() { return checkMySQLVersion(getText()); }
bool MySQLLexerBase::isBackTickQuotedId() { return !isSqlModeActive(SqlMode::NoBackslashEscapes); }
// ... (6개 추가 boolean 함수)
```

**추가된 함수 총 개수:** 68개
- 버전 체크 함수 16개
- 토큰 타입 설정 함수 43개
- Boolean 반환 함수 9개

---

## 수동으로 수행한 작업

### DLL 배포
```bash
# ANTLR4 런타임 DLL을 출력 디렉토리로 복사
cp vcpkg/installed/x64-windows/debug/bin/antlr4-runtime.dll x64/Debug/
cp vcpkg/installed/x64-windows/bin/antlr4-runtime.dll x64/Release/
```

**참고:** 이제 빌드 후 이벤트가 자동으로 처리합니다.

---

## 빌드 결과

### 수정 전
```
❌ SqlParserLib: 100개 이상의 컴파일 오류
❌ ANTLR4TEST: 200개 이상의 링커 오류
```

### 수정 후
```
✅ SqlParserLib: 빌드 성공
✅ ANTLR4TEST: 빌드 성공
✅ 런타임: DLL과 함께 정상 실행
```

---

## 핵심 교훈

1. **헤더 포함 순서가 중요합니다**
   - 부모 클래스 → 파생 클래스 → 비지터
   - Parser 헤더에 Visitor를 포함하면 절대 안 됨 (순환 의존성 발생)

2. **C++에서의 인코딩 문제**
   - UTF-8 파일의 한글 주석이 Code Page 949에서 컴파일 오류 발생
   - 해결책: 영문 주석 사용 또는 UTF-8 with BOM으로 저장

3. **정적 변수 초기화**
   - 정적 멤버 변수는 클래스 외부에서 초기화해야 함
   - .cpp 파일의 네임스페이스 범위에서 초기화

4. **DLL 배포**
   - 런타임 DLL은 .exe와 같은 디렉토리에 있어야 함
   - 빌드 후 이벤트로 이 과정을 자동화

5. **프로젝트 참조**
   - 의존 라이브러리에 대한 프로젝트 참조를 항상 추가
   - 올바른 빌드 순서 보장

---

## 테스트 방법

1. **솔루션 빌드**
   ```
   빌드 → 솔루션 다시 빌드 (Ctrl+Shift+B)
   ```

2. **애플리케이션 실행**
   ```
   디버그 → 디버깅 시작 (F5)
   또는
   디버그 → 디버깅하지 않고 시작 (Ctrl+F5)
   ```

3. **SQL 파싱 테스트**
   ```sql
   -- 예제 쿼리
   SELECT * FROM users WHERE id = 1
   ```

4. **예상 결과**
   - ✅ 애플리케이션이 성공적으로 실행됨
   - ✅ SQL 쿼리가 오류 없이 파싱됨
   - ✅ 파싱 트리가 표시됨

---

## 프로젝트 구조

```
antlr4_test/
├── ANTLR4TEST/              # MFC 애플리케이션
│   ├── ANTLR4TEST.vcxproj   # ✏️ 수정됨
│   ├── ANTLR4TESTDlg.cpp    # ✏️ 수정됨
│   └── ...
├── SqlParserLib/            # 정적 라이브러리
│   ├── SqlParserLib.vcxproj # ✏️ 수정됨
│   └── Source/
│       └── MySQL/
│           ├── MySQLLexerBase.cpp  # ✏️ 수정됨 (대규모)
│           ├── MySQLParser.h       # ✏️ 수정됨
│           └── ...
├── Common/
│   └── Include/
│       └── AntlrProxy.h     # ✏️ 수정됨
├── vcpkg/
│   └── installed/
│       └── x64-windows/
│           ├── bin/
│           │   └── antlr4-runtime.dll
│           ├── debug/
│           │   └── bin/
│           │       └── antlr4-runtime.dll
│           ├── include/
│           └── lib/
└── x64/
    ├── Debug/
    │   ├── ANTLR4TEST.exe
    │   └── antlr4-runtime.dll  # ✏️ 복사됨
    └── Release/
        └── antlr4-runtime.dll  # ✏️ 복사됨
```

---

## 파일별 요약

| 파일 | 변경 줄 수 | 유형 |
|------|-----------|------|
| ANTLR4TEST.vcxproj | ~30 | 설정 |
| SqlParserLib.vcxproj | ~4 | 설정 |
| ANTLR4TESTDlg.cpp | ~60 (제거) | 소스 |
| AntlrProxy.h | ~10 | 헤더 |
| MySQLParser.h | ~1 | 헤더 |
| MySQLLexerBase.cpp | ~100+ (추가) | 소스 |

**총계:** 약 200줄 이상 수정/추가

---

## 성공 지표

- ✅ 컴파일 오류 0개
- ✅ 링커 오류 0개
- ✅ 애플리케이션 정상 실행
- ✅ SQL 파싱 정상 동작
- ✅ 런타임 DLL 오류 없음

---

## 향후 개선 권장사항

1. **에러 핸들링 추가**
   - 더 나은 오류 메시지를 위한 커스텀 에러 리스너
   - 입력 유효성 검사

2. **데이터베이스 지원 확장**
   - Oracle, PostgreSQL, SQL Server 파서가 이미 프로젝트에 있음
   - 유사한 방식으로 활성화 가능

3. **단위 테스트**
   - 다양한 SQL 쿼리에 대한 테스트 케이스 추가
   - 회귀 테스트

4. **문서화**
   - 커스텀 함수에 대한 인라인 문서 추가
   - 빌드 지침이 포함된 README.md 업데이트

---

**로그 끝**
