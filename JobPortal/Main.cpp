#include "User.h"
#include "Job.h"
#include "JobPortal.h"
#include <iostream>

int main()
{
    User user1("name", "info", "cnsk");
    User user2("nskda","nffdsjk", "ndsjk");
    Job job1("vfdkls", "dvsgs","gsgs", "gsdgv", 9000);
    Job job2("vfdkls", "dvsgs","gsgs", "gsdgv", 4000);
    JobPortal jobb;
    jobb.registersJob(job1);
    jobb.registersJob(job2);
    jobb.registersUser(user1);
    jobb.registersUser(user2);
    jobb.applyForJob(0,0);

}