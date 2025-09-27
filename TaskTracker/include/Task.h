pragma once;

namespace TaskTracker {

class Task {
public:
    int mId;
    std::string mDescription;
    Status mStatus;
    int mCreatedAt;
    int mUpdatedAt;

    Task(int id, std::string des, Status status, int time) : mId(id),
        mDescription(des), mStatus(status), mUpdatedAt(time) {}
    
    void updateStatus();
};

}
