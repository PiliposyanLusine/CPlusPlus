#include "JobPortal.h"

void JobPortal::registersUser(User user)
{
    m_users.push_back(&user);
}
void JobPortal::registersJob(Job job)
{
    m_jobs.push_back(&job);
}


void JobPortal::applyForJob(int jobIndex, int userIndex)
{
    if(jobIndex >= 0 && jobIndex < m_jobs.size() && userIndex >= 0 && userIndex < m_users.size())
    {
        Job* job = m_jobs[jobIndex];
        User* user = m_users[userIndex];
        std::cout << job->get_title() << " " << job->get_description() << " " << job->get_requirement() << " " << job->get_company() << " " << job->get_salary() << std::endl;
        std::cout << user->get_name() << " " << user->get_contInfo() << " " << user->get_resume() << std::endl;  
    }
    else
    {
        std::cout << "No";
    }
}
