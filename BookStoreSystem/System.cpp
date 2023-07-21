#include "System.h"


void System::file( User& user)
{
    std::string fileName = user.get_name() + ".txt";
    std::ofstream file(fileName);
    if(file.is_open())
    {
        for(int i = 0; i < m_cartsBook.size(); ++i)
        {
            file << "User: " << user.get_name() << "  " << user.get_contactInfo() << std::endl;
            file << "Carts: " << m_cartsBook[i]->get_title() << "  " << m_cartsBook[i]->get_auther() << " " << m_cartsBook[i]->get_genre() << " " << m_cartsBook[i]->get_price() << " " << m_quantity << std::endl;
        }
        file.close();
        std::cout << "File is open" << std::endl;
    }
    else
    {
        std::cout << "No file" << std::endl; 
    }
}
void System::AddToCartBook( Book& book)
{
    m_cartsBook.push_back(&book);
    for(int i = 0; i < m_books.size(); ++i)
    {
        if(m_books[i]->get_title() == book.get_title() && m_books[i]->get_auther() == book.get_auther())
        {
            m_books.erase(m_books.begin() + i);
            m_quantity--;
        }
    }
}
double System::addBook( Book& book)
{   
    m_books.push_back(&book);
    m_quantity++;
    return m_quantity;
}
double System::TotalPrice( User& user)
{
    double totalPrice = 0.0;
    for(int i = 0; i < m_cartsBook.size(); ++i)
    {
        totalPrice += m_cartsBook[i]->get_price();
    }
    return totalPrice;
}

