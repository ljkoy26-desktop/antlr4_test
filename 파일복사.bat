@echo off
:: 한글 깨짐 방지를 위한 코드페이지 설정
chcp 65001 >nul

:: 기본 경로 설정 (사용자 이름에 맞춰 %USERPROFILE% 권장)
set BASE_DIR=C:\Users\USER\Desktop\Github_clone\antlr4_test
set DEST_DIR=C:\Users\USER\Desktop\내부망복사\

echo 파일 복사를 시작합니다...

:: 1. TestMFC 폴더 파일 복사
echo [복사 중] TestMFCDlg 파일...
xcopy "%BASE_DIR%\TestMFC\TestMFCDlg.h" "%DEST_DIR%\TestMFC\" /y
xcopy "%BASE_DIR%\TestMFC\TestMFCDlg.cpp" "%DEST_DIR%\TestMFC\" /y
xcopy "%BASE_DIR%\TestMFC\TestMFC.vcxproj" "%DEST_DIR%\TestMFC\" /y

:: 2. SqlParserLib 폴더 파일 복사
echo [복사 중] SQLEngine 파일...
xcopy "%BASE_DIR%\SqlParserLib\SQLEngine.h" "%DEST_DIR%\SqlParserLib\" /y
xcopy "%BASE_DIR%\SqlParserLib\SQLEngine.cpp" "%DEST_DIR%\SqlParserLib\" /y
xcopy "%BASE_DIR%\SqlParserLib\SqlParserLib.vcxproj" "%DEST_DIR%\SqlParserLib\" /y

echo.
echo 모든 파일 복사가 완료되었습니다!
pause