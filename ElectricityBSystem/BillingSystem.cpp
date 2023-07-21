#include "BillingSystem.h"


BillingSystem::BillingSystem(double ratePerUnit)
{
    this->m_ratePerUnit = ratePerUnit;
}
double BillingSystem::get_ratePerUnit() const
{
    return this->m_ratePerUnit;
}


double BillingSystem::calculateBill(const Customer* customer)
{
    return customer->get_consumtion() * m_ratePerUnit;
}



void BillingSystem::generateBill(const Customer& customer, double totalAmount)
{
    std::string fileName = customer.get_name() + ".txt";
    std::ofstream file(fileName);

    if(file.is_open())
    {
        file << "Customer Name: " << customer.get_name() << std::endl;
        file << "Contact Information: " << customer.get_contactInfo() << std::endl;
        file << "Meter number: " << customer.get_meterNumber() << std::endl;
        file << "Electricity Consumption: " << customer.get_consumtion() << std::endl;
        file << "Total Amount Due: $" << totalAmount << std::endl;

        file.close();
        std::cout << "Bill generated successfully and saved to " << fileName << std::endl;
    }
    else
    {
        std::cout << "Error creating the bill file." << std::endl;
    }
}