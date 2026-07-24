#pragma once
#include <string>

enum class Priority{
    Low,
    Medium,
    High
};

enum class Status{
    Pending,
    Completed
};

class Task { 
    private:

        //fields
        int task_id;
        std::string title;
        Priority priority;
        Status status;

    public:     
        //constructor
        Task(int task_id, std::string title, Priority priority, Status status);

        //getters
        int GetId() const;
        const std::string& GetTitle() const;
        Priority GetPriority() const;
        Status GetStatus() const;

        void UpdateStatus(Status newStatus);

};

