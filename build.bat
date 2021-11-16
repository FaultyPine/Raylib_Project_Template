@echo off

SET SCRIPT_DIR="scripts/"

if "%1"=="release" (%SCRIPT_DIR%"build-windows.bat" -r -q) else if "%1"=="clean" (%SCRIPT_DIR%"build-windows.bat" -c & rmdir /s/q temp) else (%SCRIPT_DIR%"build-windows.bat" -r -d )
exit 1