#ifndef BLOODBANK_H
#define BLOODBANK_H
#include <iostream>
#include "Donor.h"
#include <fstream>
#include <vector>


class BloodBank
{
    private:  
        std::vector<Donor> m_donors;
        int bloodInventory[8] = {0};
        int getBloodTypeIndex(std::string boolType)
        {
            if(boolType == "A+") {return 0;}
            else if(boolType == "A-") {return 1;}
            else if(boolType == "B+") {return 2;}
            else if(boolType == "B-") {return 3;}
            else if(boolType == "AB+") {return 4;}
            else if(boolType == "AB-") {return 5;}
            else if(boolType == "O+") {return 6;}
            else if(boolType == "O-") {return 7;}
            return -1;
        }
        std::string getBloodTypeByIndex(int index)
        {
            if(index == 0) {return "A+";}
            else if(index == 1) {return "A-";}
            else if(index == 2) {return "B+";}
            else if(index == 3) {return "B-";}
            else if(index == 4) {return "AB+";}
            else if(index == 5) {return "AB-";}
            else if(index == 6) {return "O+";}
            else if(index == 7) {return "O-";}
            return "-1";
        }
    public:
        BloodBank() = default;
        ~BloodBank(){}
        void registerDonor(const std::string& name, const std::string& conInfo, const std::string& bloodtype);
        void donateBlood(int amount, std::string bloodType);
        void utilizeBlood(int amount, std::string bloodType);
        void generateMonthlyReport(std::string month);


};





#endif //BLOODBANK_H