#include "System.h"

void System::addExpense(Expense expense)
{
    m_expense.push_back(&expense);
}
void System::file(User user)
{
    std::string fileName = user.get_name() + ".txt";
    std::ofstream file(fileName);
    if(file.is_open())
    {   file << "User: " << user.get_name() << " " << user.get_contInfo() << std::endl;
        for(int i = 0; i < m_expense.size(); ++i)
        {
            file << "Expense: " << std::endl << std::endl << m_expense[i]->get_amount() << std::endl << m_expense[i]->get_category() << std::endl << m_expense[i]->get_date() << std::endl << m_expense[i]->get_desprition() << std::endl;
        }
        std::cout << "File is open" << std::endl;
        file.close();
    }
    else
    {
        std::cout << "No " << std::endl;
    }
}