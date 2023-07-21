#ifndef JOBPORTAL_H
#define JOBPORTAL_H
#include <vector>
#include <iostream>
#include "User.h"
#include "Job.h"

class JobPortal
{
    private:
        std::vector<User*> m_users;
        std::vector<Job*> m_jobs;
    public: 
        void registersUser(User user);
        void registersJob(Job job);
        void applyForJob(int jobIndex, int userIndex);
};



#endif //JOBPORTAL_H