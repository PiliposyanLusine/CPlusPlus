#include "User.h"
#include "Expense.h"
#include "System.h"
#include <iostream>


int main()
{
    User user("name", "info");
    Expense exp("fsdf", "dsffs", "sdfds","fsdf");
    System system;
    system.addExpense(exp);
    system.file(user);
}