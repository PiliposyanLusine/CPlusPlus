#include "System.h"


void System::addBook(Book& book)
{
    m_books.push_back(&book);
}


void System::BookLibrary(Book& book, User& user)
{
    for(int i =0; i < m_books.size(); ++i)
    {
        if(m_books[i]->get_title() == book.get_title() && m_books[i]->get_auther() == book.get_auther())
        {
            for(int j = 0; j < m_users.size(); ++j)
            {
                if(m_users[j]->get_name() == user.get_name() && m_users[j]->get_contInfo() == user.get_contInfo())
                {
                    m_usersBook.push_back(&book);
                }
            }
        }
    }
}
void System::addUser(User& user)
{
   m_users.push_back(&user); 
}


void System::file()
{
    for(int i = 0; i < m_users.size(); ++i)
    {
        std::string fileName = m_users[i]->get_name() + ".txt";
        std::ofstream file(fileName);
        if(file.is_open())
        {
            for(int j = 0; j < m_usersBook.size(); ++j)
            {
                file << "User:  " << m_users[i]->get_name() << " " << m_users[i]->get_contInfo() << " " << m_users[i]->get_borrowedBooks() << std::endl;
                file << "Book: " << m_status.s1 <<  m_usersBook[j]->get_title() << " " << m_usersBook[j]->get_auther() << m_usersBook[j]->get_genre() << std::endl;
            }
            std::cout << "file is open " << std::endl;
            file.close();
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }
}