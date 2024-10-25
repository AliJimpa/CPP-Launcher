@echo off

REM Set the path to the Visual Studio 2022 Developer Command Prompt
set VS2022_DEV_CMD="C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\Common7\Tools\VsDevCmd.bat"

REM Check if the developer command prompt exists
if exist %VS2022_DEV_CMD% (
    echo Launching Visual Studio 2022 Developer Command Prompt...
    call %VS2022_DEV_CMD%
) else (
    echo Error: Visual Studio 2022 Developer Command Prompt not found!
    @pause
    exit /b 1
)

REM Set the path to your C++ project folder
set PROJECT_PATH=%cd%

REM Navigate to the project folder
cd /d %PROJECT_PATH%

REM Open the project in Visual Studio Code
code .

exit
REM Keep the command prompt open
REM cmd /k
