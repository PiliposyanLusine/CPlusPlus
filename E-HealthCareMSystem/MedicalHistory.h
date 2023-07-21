#ifndef MEDICALHISTORY_H
#define MEDICALHISTORY_H
#include <string>
#include <vector>

class MedicalHistory
{
    private:
        std::vector<std::string> m_diagnoss;
        std::vector<std::string> m_treatments;
        std::vector<std::string> m_medications;
        std::string m_patientName;
    public:
        MedicalHistory() = default;
        MedicalHistory(const std::string& patientName);
        std::string get_PatientName() const;

        std::vector<std::string> get_diagnoss() const;
        void addDiagnoss(const std::string& diagnoss); 

        std::vector<std::string> get_treatments() const;
        void addTreatments(const std::string& treatments);

        std::vector<std::string> get_medications() const;
        void addMedications(const std::string& medications);


};


#endif //MEDICALHISTORY_H