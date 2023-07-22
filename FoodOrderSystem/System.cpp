#include "System.h"

System::System(int price, const std::string& status, Restaurant& restuarant, Customer& customer)
{
    this->m_price = price;
    this->m_status = status;
    m_customers.push_back(&customer);
    m_restuarants.push_back(&restuarant);
}

void System::file()
{
    for(int i = 0; i < m_customers.size(); ++i)
    {
        std::string fileName = m_customers[i]->get_name() + ".txt";
        std::ofstream file(fileName);
        if(file.is_open())
        {
            for(int j = 0; j < m_restuarants.size(); ++j)
            {
                file << m_customers[i]->get_name() << " " << m_customers[i]->get_contIfno() << std::endl;
                file << m_restuarants[j]->get_name() << " " << m_restuarants[j]->get_menu()<<" " << m_restuarants[j]->get_location() << std::endl;
                file << m_price << " " << m_status;
            }
            file.close();
        }
    }
}
