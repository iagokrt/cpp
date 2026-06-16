@echo off
setlocal

if "%~1"=="" (
  echo Uso: run-cpp arquivo.cpp
  exit /b 1
)

set "SOURCE=%~1"
set "EXE=%~n1.exe"

if /I not "%~x1"==".cpp" (
  echo Informe um arquivo .cpp.
  exit /b 1
)

g++ -g "%SOURCE%" -o "%EXE%"
if errorlevel 1 exit /b %ERRORLEVEL%

"%EXE%"
exit /b %ERRORLEVEL%
