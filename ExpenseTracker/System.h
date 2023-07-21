#ifndef SYSTEM_H
#define SYSTEM_H
#include "Expense.h"
#include <string>
#include <vector>
#include <fstream>
#include "User.h"
#include <iostream>

class System
{
    private:
        std::vector<Expense*> m_expense;
    public:
        void addExpense(Expense expense);
        void file(User user);

};





#endif //SYSTEM_H
