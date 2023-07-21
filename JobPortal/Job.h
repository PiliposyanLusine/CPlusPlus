#ifndef JOB_H
#define JOB_H
#include <string>

class Job
{
    private:
        std::string m_title;
        std::string m_description;
        std::string m_requirement;
        std::string m_company;
        double m_salary;
    public:
        Job() = default;
        Job(const std::string& title, const std::string& description,const std::string& requirement, const std::string& company, double salary);

        std::string get_title() const;
        std::string get_description() const;
        std::string get_requirement() const;
        std::string get_company() const;
        double get_salary() const;
};





#endif //JOB_H