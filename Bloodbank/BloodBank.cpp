#include "BloodBank.h"

void BloodBank::registerDonor(const std::string& name, const std::string& conInfo, const std::string& bloodtype)
{
    Donor donor(name, conInfo, bloodtype);
    m_donors.push_back(donor);
} 

void BloodBank::donateBlood(int amount, std::string bloodType)
{
    int index = getBloodTypeIndex(bloodType);
    bloodInventory[index] += amount;
}

void BloodBank::utilizeBlood (int amount, std::string bloodType)
{
    int index = getBloodTypeIndex(bloodType);
    bloodInventory[index] -= amount;
}


void BloodBank::generateMonthlyReport(std::string month) 
{
    std::string fileName = "monthly_report_" + month + ".txt";
    std::ofstream file(fileName);
    if(file.is_open())
    {   
        for(int i = 0; i < m_donors.size(); ++i)
        {
            file << "Monthly Report: " << month << std::endl;
            file << "Donor: " << m_donors[i].get_name() << " " << m_donors[i].get_conInfo() << " "<< m_donors[i].get_bloodType() << std::endl;
        }
        std::cout << "Yes " << std::endl;
        file.close();
    }
    else
    {
        std::cout << "No" << std::endl;
    }
}