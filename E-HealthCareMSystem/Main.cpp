#include <iostream>
#include "Doctor.h"
#include "Patient.h"
#include "MedicalHistory.h"
#include <fstream>
#include <ctime>
#include <string>

void saveReport(const std::string& , const MedicalHistory& );


int main()
{
    // Doctor registration
    Doctor doctor1("John Doe", "Cardiology", 10, "johndoe@example.com");

    // Patient registration
    Patient patient1("Jane Smith", "1990-05-15", "Female", "janesmith@example.com");
    patient1.addMedicalConditions("Hypertension");
    patient1.addMedicalConditions("Diabetes");

    // Medical history
    MedicalHistory history1(patient1.get_name());
    history1.addDiagnoss("High blood pressure");
    history1.addDiagnoss("Type 2 diabetes");
    history1.addTreatments("Prescription medication");
    history1.addTreatments("Diet and exercise");
    history1.addMedications("Lisinopril");
    history1.addMedications("Metformin");

    // Generate and save report
    saveReport(history1.get_PatientName(), history1);

    return 0;}


void saveReport(const std::string& patientName, const MedicalHistory& history)
{
    std::string fileName = patientName + "_" + ".txt";
    std::ofstream file(fileName);

    if(file.is_open())
    {
        file << "Diagnosses: " << std::endl;
        for(const auto& diagnosis : history.get_diagnoss())
        {
            file << "- " << diagnosis << std::endl;
        }
        file << std::endl;

        file << "Treatments: " << std::endl;
        for(const auto& treatment : history.get_treatments())
        {
            file << "- " << treatment << std::endl;
        }
        file << std::endl;

        file << "Medications: " << std::endl;
        for(const auto& mediaction : history.get_medications())
        {
            file << "- " << mediaction << std::endl;
        }
        
        std::cout << "Report saved to file: " << fileName << std::endl;
        file.close();
    }
    else
    {
        std::cout << "Unable to save report." << std::endl;
    }
}




