#ifndef BILLINGSYSTEM_H 
#define BILLINGSYSTEM_H
#include <string>
#include "Customer.h"
#include <fstream>
#include <iostream>

class BillingSystem
{
    private:
        double m_ratePerUnit;
    public:
        BillingSystem() = default;
        BillingSystem(double ratePerUnit);
        double get_ratePerUnit() const;
        double calculateBill(const Customer* customer);
        void generateBill(const Customer& customer, double totalAmount);
};



#endif //BILLINGSYSTEM_H