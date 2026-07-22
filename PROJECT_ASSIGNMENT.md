# Assignment: Terminal Task Manager in C++

## Objective

Build a terminal-based application that manages personal tasks. The project must demonstrate:

- Object-Oriented Programming
- Classes split across header and source files
- Pointers and dynamic memory allocation
- A manually implemented linked list
- Text-file reading and writing
- Input validation
- Separation of responsibilities

The program must run entirely in the terminal.

## Core task data

Each task must store:

- A unique integer ID
- A non-empty title
- A priority: low, medium, or high
- A status: pending or completed

IDs must not repeat. A removed task's ID does not need to be reused.

## Required features

Your program must allow the user to:

1. Create a task. The user enters a title and chooses a priority. A new task starts as pending and receives a unique ID.
2. List all tasks. Show every task with its ID, title, priority, and status. If there are no tasks, show a clear message.
3. Mark a task as completed. The user provides an ID. If it exists, change its status to completed. If not, report that the ID was not found.
4. Remove a task. The user provides an ID. If it exists, remove that task from the linked list and free its dynamically allocated node correctly.
5. Search by title. The user enters text. Display every task whose title contains that text. Decide whether the search is case-sensitive, document your choice, and use it consistently.
6. Save tasks. Write all current tasks to a text file.
7. Load tasks at startup. When the program begins, read the saved file if it exists and rebuild the linked list. The application must not fail if the file does not exist yet.
8. Exit safely. Save tasks before finishing and release all dynamically allocated memory.

## Required file organization

Use the following files:

| File | Responsibility |
|---|---|
| `Task.h` / `Task.cpp` | Represents one task and its data |
| `TaskList.h` / `TaskList.cpp` | Defines the node structure and manually manages the linked list |
| `TaskManager.h` / `TaskManager.cpp` | Applies task-management rules and coordinates operations |
| `FileManager.h` / `FileManager.cpp` | Saves and loads task data |
| `main.cpp` | Displays the menu, reads terminal input, and calls other components |

`main.cpp` must not contain linked-list manipulation, file parsing, or core task rules.

## Design expectations

### Task

A task is a data model. It should know its own ID, title, priority, and status. It may change itself from pending to completed, but it should not know about menus, files, or other tasks.

Use strongly typed enumerations for priority and status.

### TaskList

This is the only part that manages nodes and `next` pointers.

It must support the operations needed by the application, such as:

- Add a task
- Find a task by ID
- Remove a task by ID
- Traverse all tasks
- Destroy all nodes when finished

Do not use `std::vector`, `std::list`, or another ready-made collection to replace the linked list.

### TaskManager

This is the application's rule layer. It should:

- Validate task creation rules
- Generate unique IDs
- Delegate storage work to `TaskList`
- Coordinate completing, removing, searching, listing, loading, and saving tasks

### FileManager

Choose and document a simple format where one line represents one task. It must preserve every field required to reconstruct the task later:

- ID
- Title
- Priority
- Status

Your format must safely handle titles. Decide whether you will prohibit a separator character in titles or use a format that supports it.

## Input validation

Your program must handle, without crashing:

- Empty titles
- Invalid menu options
- Invalid priority choices
- IDs that do not exist
- Non-numeric input where a number is required
- An empty task list
- A missing save file
- Malformed lines in the save file

For invalid input, show a useful message and return to a safe state.

## Terminal menu

Your application should repeatedly display a menu with options equivalent to:

1. Create task
2. List tasks
3. Complete task
4. Remove task
5. Search tasks
6. Save tasks
7. Exit

The exact wording and order are your choice, but every required feature must be reachable.

## Restrictions

Do not use:

- Graphical interfaces
- Frontend frameworks
- Qt
- APIs
- Databases
- Login systems
- `std::vector` or a ready-made list container for task storage

Do use:

- Separate `.h` and `.cpp` files
- Your own node structure
- Pointers
- Dynamic allocation and correct cleanup
- File streams for persistence

## Acceptance tests

Your project is complete only when you can demonstrate:

1. Create three tasks with different priorities.
2. List them correctly.
3. Complete one task by ID.
4. Search for text that finds one or more tasks.
5. Search for text that finds no tasks.
6. Remove the first node, a middle node, and the final node in separate tests.
7. Enter invalid options and invalid IDs without crashing.
8. Save tasks, close the program, run it again, and confirm the same tasks are loaded.
9. Exit with no memory leaks caused by linked-list nodes.

## Recommended implementation order

1. Create and test the `Task` model.
2. Create and test nodes and the basic `TaskList`.
3. Add manager rules.
4. Add terminal interaction.
5. Add file saving.
6. Add file loading.
7. Test edge cases and clean up memory.

## Current assignment

Finish the declarations in `Task.h` for the enums and the `Task` class. Do not start the linked list yet.
