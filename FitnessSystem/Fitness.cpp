#include "Fitness.h"

void Fitness::addUsers(Person person)
{
    m_users.push_back(&person);
}
void Fitness::file()
{
    for(int i = 0; i < m_users.size(); ++i)
    {    
        std::string fileName = m_users[i]->get_name() + ".txt";
        std::ofstream file(fileName);
        if(file.is_open())
        {
            file << "User: " << m_users[i]->get_name() << " " << m_users[i]->get_contInfo() << std::endl;
            file << m_users[i]->get_date();
            file << "Level: " << m_users[i]->get_level() << " " << m_level.m_fitnessarea << "  " << m_level.m_massage << " " <<m_level.m_pool << std::endl; 
            file.close();
            std::cout << "File is open " << std::endl;
        }
        else
        {
            std::cout << "File isn't open " << std::endl;
        }
    }
}

void Fitness::level()
{
    for(int i = 0; i < m_users.size(); ++i)
    {
        if(m_users[i]->get_level() == "Standard")
        {
            m_level.m_massage = 1;
            m_level.m_fitnessarea = 12;
            m_level.m_pool = 6;
        }
        else if(m_users[i]->get_level() == "Premium")
        {
            m_level.m_massage = 2;
            m_level.m_fitnessarea = 24;
            m_level.m_pool = 12;
        }
        else if(m_users[i]->get_level() == "AllIncluded")
        {
            m_level.m_massage = 3;
            m_level.m_fitnessarea = 36;
            m_level.m_pool = 18;           
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }
}


void Fitness::levelCalculete( Person person)
{
    for(int i = 0; i < m_users.size(); ++i)
    {
        if(m_level.m_massage > 0 && m_users[i]->get_level() == "Massage" && person.get_name() == m_users[i]->get_name())
        {
            m_level.m_massage--;
        }  
        else if(m_level.m_fitnessarea > 0 && m_users[i]->get_level() == "fitnessArea" && person.get_name() == m_users[i]->get_name())
        {
            m_level.m_fitnessarea--;
        }

        else if(m_level.m_pool > 0 && m_users[i]->get_level() == "Pool" && person.get_name() == m_users[i]->get_name())
        {
            m_level.m_pool--;
        }
    }
}