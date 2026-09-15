# Start a new journal entry:  .\new "pointers and references"
param([Parameter(Mandatory)][string]$Topic)

$repo = Split-Path $PSScriptRoot
$root = Join-Path $repo 'entries'
$last = Get-ChildItem $root -Directory -ErrorAction SilentlyContinue |
    ForEach-Object { [int]($_.Name -split '-')[0] } |
    Measure-Object -Maximum
$num  = '{0:D3}' -f ([int]$last.Maximum + 1)
$slug = ($Topic.ToLower() -replace '[^a-z0-9]+', '-').Trim('-')
$dir  = Join-Path $root "$num-$slug"
$date = Get-Date -Format 'yyyy-MM-dd'

New-Item -ItemType Directory $dir | Out-Null

[IO.File]::WriteAllText("$dir\main.cpp", @"
// $Topic
#include <iostream>

int main() {
    std::cout << "Hello, C++!\n";
}

"@)

[IO.File]::WriteAllText("$dir\notes.md", @"
# $Topic

_${date}_

## What I learned


## Questions / confusions


"@)

# Add the entry to the README index
[IO.File]::AppendAllText("$repo\README.md", "- $num [$Topic](entries/$num-$slug/notes.md) - $date`n")

code "$dir\main.cpp" "$dir\notes.md"
Write-Host "Created entries\$num-$slug"
