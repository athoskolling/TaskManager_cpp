# Task Manager C++ — Project Context

## Collaboration rule

Do not provide code that the learner is expected to write, including when the learner explicitly asks for code. Teach concepts, give explanations, ask guiding questions, review learner-written code, and help debug. Use pseudocode, non-project examples, or intentionally incomplete fragments only when an illustration is useful; never give a directly usable project solution.

## Project

Develop a terminal-based Task Manager application in C++.

The learning goals are object-oriented programming, pointers, dynamic allocation, a manually implemented linked list, file reading and writing, and organizing code across multiple files.

## Current milestone

The first architecture and data-model decisions are complete. `TaskManager` owns task-management rules and unique-ID generation; `FileManager` owns text-file reading and writing. The project files and the assignment brief have been created. `Task.h` is complete with include protection, PascalCase enum values, private fields, a constructor declaration, const-correct getters, and a generic `UpdateStatus(Status newStatus)` method. The next step is to implement every declared `Task` method in `Task.cpp`.

## Required functionality

- Create a task with a title and priority.
- List every registered task.
- Mark a task as completed.
- Remove a task by ID.
- Search tasks by title.
- Save tasks to a text file.
- Load saved tasks when the program starts.

## Task data

Each task must have:

- A unique ID.
- A title.
- A priority: low, medium, or high.
- A status: pending or completed.

## Rules and constraints

- The program runs exclusively in the terminal.
- Do not use a graphical interface, frontend, Qt, API, database, or login.
- Store tasks in a manually created linked list; do not use `std::vector`.
- Split the application into classes and separate files.
- Validate invalid input, including an empty title, an invalid menu option, and a nonexistent ID.
- Tasks must remain available when the program is run again.

## Conceptual structure

Separate these responsibilities:

- The task model.
- Node and linked-list structure.
- Task-management rules.
- Terminal input and output.
- File persistence.

`main` should primarily display the menu and delegate work to the components responsible for the logic. It must not hold the whole system implementation.

## Session continuity

- Read this file at the beginning of every learning session before giving project-specific guidance.
- Update it after each meaningful milestone with the learner's current progress, unresolved questions, and next concrete step.
- Run `scripts\start-context-autosave.ps1` during a learning session when three-minute timestamped backups are desired. It snapshots this file only; it cannot capture conversation content that has not been written here.

## Session record: 2026-07-22

- Confirmed that `TaskManager_cpp` is the learner's C++ project; the `Codex/professor_codex` repository is only the reusable teaching setup.
- Created `PROJECT_ASSIGNMENT.md` with the complete project brief, constraints, acceptance tests, and recommended implementation sequence.
- Added an optional three-minute context-snapshot script in `scripts/start-context-autosave.ps1`, its usage README, and a Git ignore rule for snapshots.
- Clarified that the teacher must never provide code that the learner is expected to write, even when directly asked. Guidance may use concepts, questions, pseudocode, non-project examples, or incomplete illustrations.
- Covered the purpose and placement of enum classes, the distinction between private and protected data, getter declaration syntax, `std::` namespace qualification, and PascalCase naming.
- Added `#pragma once`, made getters const-correct, and changed the title getter to return a const reference.
- Completed the `Task.h` declaration, including the typed status-update parameter.
