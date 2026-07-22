# Context snapshots

`start-context-autosave.ps1` saves a dated copy of `TaskManager_Context.md` every three minutes while it runs.

Run this command from the `TaskManager_cpp` folder:

```powershell
powershell -ExecutionPolicy Bypass -File .\scripts\start-context-autosave.ps1
```

Press `Ctrl+C` in that terminal to stop it. The snapshots are stored in `.context-backups` and are ignored by Git.

This script can preserve only progress already recorded in `TaskManager_Context.md`. At the end of each meaningful discussion, update that context file with the completed work and the next step.
