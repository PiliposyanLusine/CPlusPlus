#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>
//#include <tuple>
class Doctor
{
    private:
        std::string m_name;
        std::string m_specialization;
        std::string m_contactInfo;
        int m_yearsOfExperience;
        // std::tuple<std::string, std::string, std::string, int> m_tuple;
    public:
        Doctor() = default;
        ~Doctor() {}
        // void set(std::string name, std::string specialization, std::string contactInfo, int yearsOfExperience);
        // std::string get(std::string name, std::string specialization, std::string contactInfo, int yearsOfExperience);
        Doctor(const std::string& name, const std::string& specialization,int yearsOfExperience, const std::string& contactInfo);
        std::string get_name() const;
        std::string get_specialization() const;
        std::string get_contactInfo() const;
        int get_yearsOfExperience() const;


};



#endif //DOCTOR_H