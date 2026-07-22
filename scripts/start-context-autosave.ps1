[CmdletBinding()]
param(
    [int]$IntervalMinutes = 3
)

$ErrorActionPreference = 'Stop'

if ($IntervalMinutes -lt 1) {
    throw 'IntervalMinutes must be at least 1.'
}

$projectRoot = Split-Path -Parent $PSScriptRoot
$contextPath = Join-Path $projectRoot 'TaskManager_Context.md'
$backupDirectory = Join-Path $projectRoot '.context-backups'

if (-not (Test-Path -LiteralPath $contextPath)) {
    throw "Context file not found: $contextPath"
}

New-Item -ItemType Directory -Force -Path $backupDirectory | Out-Null
Write-Output "Saving a context snapshot every $IntervalMinutes minute(s). Press Ctrl+C to stop."

while ($true) {
    $timestamp = Get-Date -Format 'yyyy-MM-dd_HH-mm-ss'
    $snapshotPath = Join-Path $backupDirectory "TaskManager_Context_$timestamp.md"
    Copy-Item -LiteralPath $contextPath -Destination $snapshotPath
    Write-Output "Saved $snapshotPath"
    Start-Sleep -Seconds ($IntervalMinutes * 60)
}
