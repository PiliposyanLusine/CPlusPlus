#include "Book.h"


Book::Book(const std::string& title, const std::string& auther, const std::string& genre)
{
    this->m_title = title;
    this->m_genre = genre;
    this->m_auther = auther;
}
std::string Book::get_auther() const
{
    return this->m_auther;
}
std::string Book::get_genre() const
{
    return this->m_genre;
}
std::string Book::get_title() const
{
    return this->m_title;
}
