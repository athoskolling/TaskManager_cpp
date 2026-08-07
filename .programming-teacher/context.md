# Professor Codex Context

## Project

Terminal Task Manager in C++ using a manually implemented linked list.

## Current milestone

Designing the `Node` structure and basic `TaskList` interface. The `Task` model is complete.

## Learner profile

Beginner C++ learner working through object-oriented design, pointers, dynamic allocation, and linked lists step by step.

Prefers every teaching response to include a practical action, even when it is very small, together with precise instructions for carrying it out successfully.

## Mastered concepts

`enum class`, class fields and constructor parameters, private data, const-correct getters, separate header/source files, and the completed `Task` model.

## Concepts in progress

Linked-list ownership, node structure, `head`, `nullptr`, pointers, and dynamic allocation.

## Recurring difficulties

Distinguishing which class owns each piece of state: `Task` data versus `Node` links versus `TaskList` list pointers.

## Decisions and conventions

A node will store a `Task` object directly and a pointer to the next node. `TaskList` will initially store `head` only; `tail` is optional and excluded for now.

Each lesson response ends with a concrete, proportionate practice prompt (for example: a prediction, short explanation, code attempt, test, or observation). It must state exactly what the learner should do, where or how to do it, what to check, and what a successful result looks like. Keep the task small enough for one interactive turn and do not provide project code the learner is expected to write.

## Completed exercises

Identified `head == nullptr` as the empty-list state and distinguished `TaskList` fields from `Node` fields.

## Next recommended step

Have the learner write `TaskList.h` with a private nested `Node`, a private `head` pointer, a constructor, and an add-method declaration that accepts one `Task`; then review it before moving on. Give an exact, code-free checklist for completing and checking the exercise.

## Last updated

2026-08-07
