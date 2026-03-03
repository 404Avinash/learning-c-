[Environment]::SetEnvironmentVariable('EDITOR','', 'Process')
[Environment]::SetEnvironmentVariable('GIT_EDITOR', 'true', 'Process')

Set-Location "c:\Users\aashu\Downloads\c+++++_cw"

# Configure git
git config user.email "user@example.com"
git config user.name "User"
git config core.editor "true"

# Check current status
Write-Host "Current Git Status:"
git status

# Remove old remote if exists
git remote remove origin -ErrorAction SilentlyContinue

# Add remote
git remote add origin https://github.com/404Avinash/learning-c-.git

# Fetch to see what's on remote
git fetch origin main

# Reset local to start clean
git reset --hard

# Push ar1.cpp
Write-Host "`n=== Pushing ar1.cpp ==="
git add ar1.cpp
git commit -m "Add ar1.cpp"
git push origin main 2>&1

# Push sec.cpp
Write-Host "`n=== Pushing sec.cpp ==="
git add sec.cpp
git commit -m "Add sec.cpp"
git push origin main 2>&1

# Push thir.cpp
Write-Host "`n=== Pushing thir.cpp ==="
git add thir.cpp
git commit -m "Add thir.cpp"
git push origin main 2>&1

Write-Host "`nDone!"
