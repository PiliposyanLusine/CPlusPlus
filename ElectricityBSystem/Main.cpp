#include "Customer.h"
#include "BillingSystem.h"
#include <iostream>

int main()
{
    Customer customer("name","constactInfo", "meternumber", 888);
    BillingSystem billsystem(887);
    std::cout << "Customer: " << std::endl;
    std::cout << customer.get_name() << " " << customer.get_contactInfo() << " " << customer.get_meterNumber() << std::endl;
    double totalPrice = billsystem.calculateBill(&customer);
    std::cout << "Totoal price " << totalPrice << std::endl;
    billsystem.generateBill(customer, totalPrice);
    return 0;
}