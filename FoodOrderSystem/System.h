#ifndef SYSTEM_H
#define SYSTEM_H
#include <string>
#include "Customer.h"
#include "Restaurant.h"
#include <vector>
#include <fstream>

class System
{   
    private:    
        int m_price;
        std::vector<Customer*> m_customers;
        std::vector<Restaurant*> m_restuarants;
        std::string m_status;
    public:
        System() = default;
        System(int price, const std::string& status, Restaurant& restuarant, Customer& customer);
        void file();
};




#endif //SYSTEM_H