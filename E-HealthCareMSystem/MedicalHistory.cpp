#include "MedicalHistory.h"


MedicalHistory::MedicalHistory(const std::string& patientName)
{
    this->m_patientName = patientName;
}
std::string MedicalHistory::get_PatientName() const
{
    return this->m_patientName;
}


std::vector<std::string> MedicalHistory::get_diagnoss() const
{
    return this->m_diagnoss;
}
void MedicalHistory::addDiagnoss(const std::string& diagnoss)
{
    m_diagnoss.push_back(diagnoss);
}



std::vector<std::string> MedicalHistory::get_treatments() const
{
    return this->m_treatments;
}
void MedicalHistory::addTreatments(const std::string& treatments)
{
    m_treatments.push_back(treatments);
}



std::vector<std::string> MedicalHistory::get_medications() const
{
    return this->m_medications;
}
void MedicalHistory::addMedications(const std::string& medications)
{
    m_medications.push_back(medications);
}