#ifndef PATIENT_H
#define PATIENT_H
#include <string>
#include <vector>

class Patient
{
    private:
        std::string m_name;
        std::string m_birthDate;
        std::string m_gender;
        std::string m_contactInfo;
        std::vector<std::string> m_medicalConditions;
    public:
        Patient() = default;
        Patient(const std::string& name, const std::string& birthDate, const std::string& gender, const std::string& contactInfo);
        std::string get_name() const;
        std::string get_birthDate() const;
        std::string get_gender() const;
        std::string get_contactInfo() const;
        std::vector<std::string> get_medicalConditions() const;
        void addMedicalConditions(const std::string& condition);
};

#endif //PATIENT_H
