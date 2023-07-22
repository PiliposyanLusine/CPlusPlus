#include "User.h"

User::User(const std::string& name, const std::string& contInfo, const std::string& borrowedBooks)
{
    this->m_name = name;
    this->m_contInfo = contInfo;
    this->m_borrowedBooks = borrowedBooks;
}
std::string User::get_name() const
{
    return this->m_name;
}
std::string User::get_contInfo() const
{
    return this->m_contInfo;
}
std::string User::get_borrowedBooks() const
{
    return this->m_borrowedBooks;
}
