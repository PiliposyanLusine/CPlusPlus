#ifndef SYSTEM_H
#define SYSTEM_H
#include "User.h"
#include "Book.h"
#include <vector>
#include <fstream>
#include <iostream>


class System
{
    private:
        std::vector<Book*> m_books;
        std::vector<Book*> m_cartsBook;
        double m_quantity = 0.0;

    public:
        void file( User& user);
        void AddToCartBook( Book& book);
        double addBook( Book& book);
        double TotalPrice( User& user);

};



#endif //SYSTEM_H