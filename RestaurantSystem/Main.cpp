#include <iostream>
#include "System.h"
#include "User.h"
#include "Table.h"

int main()
{
    User user1("name1", "info1");
    User user2("name2", "info2");
    Table table1("111", "120$");
    Table table2("222", "121$");
    System system;
    system.addTable(table1);
    system.addTable(table2);
    system.addUser(user1);
    system.addUser(user2);
    system.file();
}