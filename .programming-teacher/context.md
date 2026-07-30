# Professor Codex Context

## Project

Terminal Task Manager in C++ using a manually implemented linked list.

## Current milestone

Designing the `Node` structure and basic `TaskList` interface. The `Task` model is complete.

## Learner profile

Beginner C++ learner working through object-oriented design, pointers, dynamic allocation, and linked lists step by step.

## Mastered concepts

`enum class`, class fields and constructor parameters, private data, const-correct getters, separate header/source files, and the completed `Task` model.

## Concepts in progress

Linked-list ownership, node structure, `head`, `nullptr`, pointers, and dynamic allocation.

## Recurring difficulties

Distinguishing which class owns each piece of state: `Task` data versus `Node` links versus `TaskList` list pointers.

## Decisions and conventions

A node will store a `Task` object directly and a pointer to the next node. `TaskList` will initially store `head` only; `tail` is optional and excluded for now.

## Completed exercises

Identified `head == nullptr` as the empty-list state and distinguished `TaskList` fields from `Node` fields.

## Next recommended step

Ask whether `Node` belongs inside `TaskList` or should be a separate structure visible project-wide, and have the learner justify the choice before writing declarations.

## Last updated

2026-07-29
