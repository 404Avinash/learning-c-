@echo off
setlocal enabledelayedexpansion

cd /d "c:\Users\aashu\Downloads\c+++++_cw"

REM Configure git
git config user.email "user@example.com"
git config user.name "User"

REM Add remote
git remote remove origin >nul 2>&1
git remote add origin https://github.com/404Avinash/learning-c-.git

REM Fetch from remote
git fetch origin main

REM Push ar1.cpp
echo === Pushing ar1.cpp ===
git add ar1.cpp
git commit -m "Add ar1.cpp"
git push origin main

REM Push sec.cpp
echo === Pushing sec.cpp ===
git add sec.cpp
git commit -m "Add sec.cpp"
git push origin main

REM Push thir.cpp
echo === Pushing thir.cpp ===
git add thir.cpp
git commit -m "Add thir.cpp"
git push origin main

echo Done!
pause
