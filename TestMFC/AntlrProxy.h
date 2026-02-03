#pragma once


/*
* 
min, max: Windows 매크로 함수와 C++ 표준 라이브러리(std::min)가 이름이 같아서 충돌. (반드시 해제 필요)

ERROR : Windows에 #define ERROR 0이 있는데, ANTLR enum에 ERROR라는 항목이 있어서 충돌. (반드시 해제 필요)

TRUE, FALSE : Windows 매크로(1, 0)입니다.하지만 ANTLR는 내부적으로 C++ 표준 키워드인 소문자 true, false를 사용합니다.대문자와 소문자는 다르므로 충돌하지 않습니다.따라서 굳이 해제할 필요가 없습니다.

3. (고급)앞으로를 위한 팁 : "Wrapper 클래스" 사용
지금처럼 Dlg.cpp 파일 상단에 #undef를 나열하는 것은 임시방편입니다.프로젝트가 커지면 * *"ANTLR 전용 격리 공간" * *을 만드는 것이 가장 좋습니다.

방법:

AntlrProxy.h 같은 헤더 파일을 하나 만듭니다.

그 파일 안에서만 #undef를 하고 <antlr4 - runtime.h>를 include 합니다.

MFC 소스(Dlg.cpp)에서는 <antlr4 - runtime.h> 대신 "AntlrProxy.h" 만 include 합니다.

이렇게 하면 MFC 파일이 지저분해지는 것을 막을 수 있습니다.

결론: 지금 당장은 #undef TRUE, #undef FALSE 두 줄만 삭제하시면 모든 문제가 해결되고 빌드에 성공하실 겁니다!


*/


// ==========================================
// [중요] Windows 매크로 충돌 방지 코드
// min, max 뿐만 아니라 ERROR, NO_ERROR 등도 해제해야 합니다.
// ==========================================
#undef min
#undef max
#undef ERROR
#undef NO_ERROR
//#undef TRUE
//#undef FALSE
//#include <antlr4-runtime/antlr4-runtime.h>
#include <antlr4-runtime.h>