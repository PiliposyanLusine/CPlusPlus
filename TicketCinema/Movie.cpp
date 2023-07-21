#include "Movie.h"


Movie::Movie(const std::string& title, const std::string& duration, const std::string& rating)
{
    this->m_title = title;
    this->m_duration = duration;
    this->m_rating = rating;
}
std::string Movie::get_title() const
{
    return this->m_title;
}
std::string Movie::get_duration() const
{
    return this->m_duration;
}
std::string Movie::get_rating() const
{
    return this->m_rating;
}
std::vector<std::string> Movie::get_showtime() const
{
    return this->m_showtime;
}


void Movie::registorShowTime(const std::string& time)
{
    m_showtime.push_back(time);
}