제공해주신 PlSqlLexer.h 파일의 enum 목록을 전수 조사하여, **Windows SDK(WinNT.h, WinGDI.h, WinUser.h 등)**와 충돌을 일으키는 독성 상수들을 모두 찾아냈습니다.
이 단어들은 Windows가 매크로(#define)로 선점하고 있어, #undef 처리 없이는 ANTLR 파서에서 **'구문 오류'**나 '추상 클래스 인스턴스화 불가' 에러를 무조건 발생시킵니다.

🚨 충돌 상수 목록 (Windows 헤더별 분류)

가장 빈번하게 에러를 유발하는 순서대로 정리했습니다.



1. WinNT.h 및 기본 시스템 관련 (가장 치명적)
이 단어들은 메모리, 권한, 상태값 등을 다룰 때 사용됩니다.
ABORT: (Line 24 부근 에러 주범)
ACCESS: (Line 24 부근 에러 주범)
ACL: (Line 24 부근 에러 주범)
DELETE: (SQL의 핵심 토큰이나 Windows에서는 삭제 권한 매크로)
ERROR: (상태값 매크로)
STATUS: (상태값 매크로)
TYPE: (데이터 타입 정의용)
CONST: (C++ 키워드와 별개로 Windows에서 #define CONST const로 정의됨)
TEXT: (#define TEXT(q) L##q 유니코드 치환 매크로)
ANY: (WinNT에서 ANYSIZE_ARRAY 등으로 활용됨)
CONTEXT: (CPU 컨텍스트 구조체 이름과 충돌)
TIMESTAMP: (시간 관련 매크로)


2. WinGDI.h (그래픽 관련)
사용자님이 언급하신 ALTERNATE가 포함된 그룹입니다.
ALTERNATE: (Fill 모드 매크로)
RELATIVE: (좌표 계산 매크로)
ABSOLUTE: (좌표 계산 매크로)
TRANSPARENT: (배경 모드 매크로)
OPAQUE: (배경 모드 매크로)
SYMBOL: (글꼴 관련 매크로)


3. WinUser.h 및 UI 관련
ACTION: (사용자 입력 관련)
CHECK: (체크박스/메뉴 관련)
COPY: (클립보드/파일 복사 관련)
HELP: (도움말 관련)
IGNORE: (에러 처리 관련)
INPUT / OUTPUT: (I/O 제어 관련)
WAIT: (이벤트 대기 관련)
POSITION: (창 위치 관련)
TRANSLATE: (메시지 변환 관련)


4. WinDef.h 및 표준 논리값
IN / OUT: (함수 파라미터 방향 표시용 매크로, 매우 위험)
OPTIONAL: (파라미터 선택 사항 매크로)
INTERFACE: (COM 인터페이스 정의용 매크로)
STRICT: (타입 체크 강화 매크로)
TRUE / FALSE: (Windows 고유의 1과 0 매크로)
NEAR / FAR: (16비트 시절 유물이나 여전히 정의되어 있음)