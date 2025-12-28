# 주의 사항 

C++ 17 사용을 필요로 합니다. ( C++ 14 버전 까지는 복잡한 설정이 들어가야 하며, 이 또한 권장하지 않습니다. )


# ANTLR4 C++ Runtime Setup for MFC (via vcpkg)

이 문서는 Visual Studio 2019+ MFC 환경에서 `vcpkg`를 사용하여 ANTLR4 C++ Runtime을 빌드하고 연동하는 방법을 설명합니다.

## 1. vcpkg 설치 (Prerequisites)

이미 `vcpkg`가 설치되어 있다면 이 단계는 건너뛰세요.

1. **Git Bash** 또는 **PowerShell**을 엽니다.
2. 원하는 디렉터리(예: `C:\src`)에 `vcpkg`를 다운로드하고 설치합니다.

```powershell
cd C:\src
git clone [https://github.com/microsoft/vcpkg.git](https://github.com/microsoft/vcpkg.git)
cd vcpkg
.\bootstrap-vcpkg.bat


2. MFC 프로젝트 설정 확인 (⚠️ 중요)
설치할 라이브러리 버전을 결정하기 위해 현재 MFC 프로젝트의 런타임 라이브러리 설정을 확인해야 합니다.

Visual Studio: 프로젝트 -> 속성 -> 구성 속성 -> C/C++ -> 코드 생성(Code Generation)

런타임 라이브러리(Runtime Library) 항목 확인

내 프로젝트 설정값,설명,선택해야 할 vcpkg 모드 (Triplet)
"다중 스레드 DLL (/MD, /MDd)",MFC 기본값. DLL 공유 사용.,x64-windows (또는 x86)
"다중 스레드 (/MT, /MTd)",Static Link. 실행 파일에 포함.,x64-windows-static

3. ANTLR4 설치 및 연동
3.1 설치 명령어 (PowerShell)
위 2단계에서 확인한 버전에 맞춰 아래 명령어 중 하나를 실행합니다.


Case A: 프로젝트가 /MD (DLL) 설정인 경우 (권장)


.\vcpkg install antlr4:x64-windows


Case B: 프로젝트가 /MT (Static) 설정인 경우


.\vcpkg install antlr4:x64-windows-static

3.2 Visual Studio 통합 (Integrate)
Visual Studio가 설치된 라이브러리를 자동으로 인식하도록 연결합니다. (최초 1회만 수행)

.\vcpkg integrate install


성공 메시지: Applied user-wide integration for this vcpkg root.

4. 필수 추가 설정 (Build Configuration)
설치 후 빌드 오류를 방지하기 위해 다음 설정을 프로젝트에 적용해야 합니다.

4.1 포함 디렉터리 설정 (Include Path)
ANTLR 헤더 파일 경로 인식을 위해 프로젝트 속성에서 경로를 추가합니다.

프로젝트 속성 -> C/C++ -> 일반 -> 추가 포함 디렉터리

경로 추가: [vcpkg설치경로]\installed\x64-windows\include\antlr4-runtime

4.2 C++ 언어 표준 설정
ANTLR4 최신 버전은 C++17 기능을 사용합니다.

프로젝트 속성 -> C/C++ -> 언어 -> C++ 언어 표준

값 변경: ISO C++17 표준(/std:c++17)

4.3 Windows 매크로 충돌 해결 (코드 수정)
Windows/MFC의 min, max, ERROR 매크로가 ANTLR와 충돌하므로, ANTLR 헤더를 포함하기 전에 반드시 해제해야 합니다.

사용 예시 (Dlg.cpp 또는 Proxy Header):

#include "pch.h"
// ... MFC 관련 헤더들 ...

// [중요] ANTLR 헤더 포함 전 매크로 해제
#undef min
#undef max
#undef ERROR
#undef NO_ERROR

#include <antlr4-runtime.h> // 또는 <antlr4-runtime/antlr4-runtime.h>




5. 문제 해결 (Troubleshooting)
Q1. "헤더 파일을 찾을 수 없습니다"
원인 1: Visual Studio 상단 설정이 Debug / x64가 아닌 x86으로 되어 있는지 확인하세요.

원인 2: 4.1단계의 추가 포함 디렉터리 설정이 되어 있는지 확인하세요.

Q2. LNK2038: 'RuntimeLibrary' 불일치 오류
에러 메시지: value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease'

해결: 2단계(런타임 라이브러리 확인)를 다시 확인하고, vcpkg install을 올바른 버전으로 다시 수행하세요.

Q3. C2059: 구문 오류 '상수' (Syntax error 'constant')
원인: Windows의 ERROR 매크로(0으로 정의됨)와 ANTLR의 enum ERROR가 충돌.

해결: 4.3단계를 참조하여 #undef ERROR를 코드에 추가하세요.
