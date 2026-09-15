# Commit everything and push to GitHub:  .\save   or   .\save "learned about loops"
param([string]$Message = "journal: $(Get-Date -Format 'yyyy-MM-dd HH:mm')")

$repo = Split-Path $PSScriptRoot
git -C $repo add -A
git -C $repo commit -m $Message
git -C $repo push
