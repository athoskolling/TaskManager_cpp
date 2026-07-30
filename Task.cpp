#include "Task.h"

Task::Task(int task_id, std::string title, Priority priority, Status status)
{
    this->task_id = task_id;
    this->title = title;
    this->priority = priority;
    this->status = status;
}

int Task::GetId() const
{
    return task_id;
}

const std::string& Task::GetTitle() const
{
    return title;
}

Priority Task::GetPriority() const
{
    return priority;
}

Status Task::GetStatus() const
{
    return status;
}

void Task::UpdateStatus(Status newStatus)
{
    status = newStatus;
}