#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include "User.h"
#include "Book.h"
#include <fstream>
#include <iostream>

struct Status
{
    std::string s1 = "Avaible";
    std::string s2 = "Blocked";
};

class System
{
    private:
        std::vector<Book*> m_books;
        std::vector<Book*> m_usersBook;
        std::vector<User*> m_users;
        Status m_status;
    public:
        void addBook(Book& book);
        void BookLibrary(Book& book, User& user);
        void file();
        void addUser(User& user);
};






#endif //SYSTEM_H