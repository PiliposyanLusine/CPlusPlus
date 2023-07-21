#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include "Table.h"
#include "User.h"
#include <fstream>

class System
{
    private:
        std::vector<Table*> m_table;
        std::vector<User*> m_user;
    public:
        void addTable(Table table);
        void addUser(User user);
        void file();
};




#endif //SYSTEM_H