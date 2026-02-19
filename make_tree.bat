@echo off
@chcp 65001 >nul
setlocal

:: [수정] 0KB 방지를 위해 작업 디렉토리를 배치 파일 위치로 고정합니다.
pushd "%~dp0"

REM 출력 파일 이름 설정
set "OUT=MyProject_Structure.txt"

echo 프로젝트 구조를 추출하고 있습니다... (Testcase 포함)

REM 1. 첫 번째 섹션 작성 (SqlParserLib/Source)
echo ========================================== > "%OUT%"
echo [1] SQLParserLib Source Structure >> "%OUT%"
echo ========================================== >> "%OUT%"
echo. >> "%OUT%"
tree "SqlParserLib\Source" /f >> "%OUT%"

echo. >> "%OUT%"
echo. >> "%OUT%"

REM 2. 두 번째 섹션 작성 (TestMFC)
echo ========================================== >> "%OUT%"
echo [2] TestMFC Structure >> "%OUT%"
echo ========================================== >> "%OUT%"
echo. >> "%OUT%"
tree "TestMFC" /f >> "%OUT%"

echo. >> "%OUT%"
echo. >> "%OUT%"

REM 3. [추가] 세 번째 섹션 작성 (Testcase)
echo ========================================== >> "%OUT%"
echo [3] Testcase Structure >> "%OUT%"
echo ========================================== >> "%OUT%"
echo. >> "%OUT%"
:: image_731eb2 경로에 근거하여 "Testcase" 폴더를 추출합니다.
tree "Testcase" /f >> "%OUT%"

echo.
echo 완료되었습니다! "%OUT%" 파일을 클로드에게 전달하세요.
popd
pause