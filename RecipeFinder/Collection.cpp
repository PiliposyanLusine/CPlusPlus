#include "Collection.h"

void Collection::file(Reciple& reciple) const
{
    std::string fileName = reciple.get_name() + ".txt";
    std::ofstream file(fileName);
    if(file.is_open())
    {   
        for(int i = 0; i < m_reciples.size(); ++i)
        {
            file << reciple.get_name() << "  " << reciple.get_instruction() << std::endl;
            file << m_reciples[i]->get_name() << " " << m_reciples[i]->get_instruction() << std::endl;
        }
        file.close();
        std::cout << "File is open" << std::endl;
    }
    else
    {
        std::cout << "No " << std::endl;
    }
}

void Collection::search(Reciple& reciple)
{
    for(int i = 0; i < m_reciples.size(); ++i)
    {
        if(m_reciples[i]->get_name() == reciple.get_name())
        {
            std::cout << m_reciples[i]->get_instruction() << std::endl;
        }
    }
}
void Collection::save(Reciple& reciple)
{
    for(int i = 0; i < m_reciples.size(); ++i)
    {
        if(m_reciples[i]->get_name() == reciple.get_name())
        {
            return;
        }
    }
    m_reciples.push_back(&reciple);
}
