#include "System.h"

void System::addTable(Table table)
{
    m_table.push_back(&table);
}
void System::addUser(User user)
{
    m_user.push_back(&user);
}
void System::file()
{
    std::ofstream file("Restaurant.txt");

    if(file.is_open())
    {
        for(int i = 0; i < m_table.size(); ++i)
        {
            file << "Table: " <<m_table[i]->get_number() << " "<< m_table[i]->get_capacity() << std::endl;
        }
        for(int i = 0; i < m_user.size(); ++i)
        {
            file << "User: " <<m_user[i]->get_name() << " " << m_user[i]->get_contInfo() << std::endl;
        }
    }
}