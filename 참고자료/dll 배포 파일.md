# SqlParserLib DLL 배포 파일 목록

## Release 배포 (운영 환경)

### 필수 파일

| 파일 | 원본 경로 | 설명 |
|------|-----------|------|
| `SqlParserLib.dll` | `bin\Release x64\` | 핵심 파서 DLL |
| `SqlParserLib.lib` | `bin\Release x64\` | Import Library (링크 시 참조) |
| `antlr4-runtime.dll` | `bin\Release x64\` | ANTLR4 런타임 의존성 DLL |

### 헤더 파일 (연동 프로젝트에 포함)

| 파일 | 원본 경로 | 설명 |
|------|-----------|------|
| `SQLEngine.h` | `SqlParserLib\` | 공개 API 헤더 (클래스/구조체/열거형 정의) |
| `framework.h` | `SqlParserLib\` | DLL export/import 매크로 (`SQLPARSERLIB_API`) |

### 선택 파일

| 파일 | 원본 경로 | 설명 |
|------|-----------|------|
| `SqlParserLib.pdb` | `bin\Release x64\` | 릴리즈 디버그 심볼 (크래시 덤프 분석 시 필요) |

---

## Debug 배포 (개발/테스트 환경)

> Debug 빌드는 파일명 뒤에 `D` 접미사가 붙음

| 파일 | 원본 경로 | 설명 |
|------|-----------|------|
| `SqlParserLibD.dll` | `bin\Debug x64\` | 디버그 빌드 DLL |
| `SqlParserLibD.lib` | `bin\Debug x64\` | 디버그 빌드 Import Library |
| `antlr4-runtime.dll` | `bin\Debug x64\` | ANTLR4 런타임 의존성 DLL (Debug 빌드용) |
| `SqlParserLibD.pdb` | `bin\Debug x64\` | 디버그 심볼 (중단점/스택 추적 필수) |

---

## 연동 프로젝트 설정 방법

### 1. 헤더 경로 추가
```
[프로젝트 속성] > C/C++ > 추가 포함 디렉터리
→ SqlParserLib 헤더 폴더 경로 추가
```

### 2. LIB 파일 참조
```
[프로젝트 속성] > 링커 > 추가 라이브러리 디렉터리
→ bin\Release x64\ (또는 Debug x64\)

[프로젝트 속성] > 링커 > 추가 종속성
→ SqlParserLib.lib  (Release)
→ SqlParserLibD.lib (Debug)
```

### 3. DLL 배치
- `SqlParserLib.dll` 과 `antlr4-runtime.dll` 을 실행 파일(.exe)과 동일 폴더에 배치

### 4. include 예시
```cpp
#include "SQLEngine.h"   // 공개 API 헤더
```

---

## 배포 파일 구조 예시

```
배포 폴더/
├── include/
│   ├── SQLEngine.h       ← 공개 API 헤더
│   └── framework.h       ← DLL export 매크로
├── lib/
│   ├── SqlParserLib.lib  ← Release Import Library
│   └── SqlParserLibD.lib ← Debug Import Library
└── bin/
    ├── SqlParserLib.dll      ← Release DLL
    ├── SqlParserLibD.dll     ← Debug DLL
    └── antlr4-runtime.dll    ← 의존성 DLL (Release/Debug 공용)
```

---

## 주의 사항

- `antlr4-runtime.dll` 은 **Release용과 Debug용이 별도**로 빌드되어 있음.
  배포 구성(Release/Debug)에 맞는 버전을 함께 제공해야 함.
- `SQLEngine.h` 에 정의된 `SqlStatementInfo`, `TokenInfo`, `DatabaseType` 등의 구조체/열거형은
  연동 프로젝트에서 직접 사용하므로 **반드시 포함**해야 함.
- `framework.h` 는 `SQLPARSERLIB_API` 매크로를 포함하므로 `SQLEngine.h` 보다 먼저 include되어야 함
  (단, `SQLEngine.h` 내부에서 `#include "framework.h"` 를 이미 수행하고 있음).
