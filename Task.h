#include <string>

enum class Priority{
    low,
    medium,
    high
};

enum class Status{
    pending,
    completed
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
        const int GetId();
        const std::string GetTitle();
        const Priority GetPriority();
        const Status GetStatus();

};

