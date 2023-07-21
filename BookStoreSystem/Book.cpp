#include "Book.h"

Book::Book(const std::string& title, const std::string& auther, const std::string& genre, double price)
{
    this->m_title = title;
    this->m_auther = auther;
    this->m_genre = genre;
    this->m_price = price;
}
std::string Book::get_title() const
{
    return this->m_title;
}
std::string Book::get_auther() const
{
    return this->m_auther;
}
std::string Book::get_genre() const
{
    return this->m_genre;
}
double Book::get_price() const
{
    return this->m_price;
}

