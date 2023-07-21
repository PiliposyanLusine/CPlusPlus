#include "System.h"

System::System(const std::string& ticket)
{
    this->m_ticket = ticket;

}
void System::add_user(const std::string& name, const std::string& contInfo)
{
    User user(name,contInfo);
    m_users.push_back(user);
}
void System::add_movie(const std::string& title, const std::string& duration, const std::string& rating)
{
    Movie movie(title, duration, rating);
    m_movies.push_back(movie);
}

void System::file()
{
    for(int i = 0; i < m_movies.size(); ++i)
    {
        std::string fileName = m_movies[i].get_title() + ".txt";
        std::ofstream file(fileName);
        if(file.is_open())
        {
            file << "Movie name: " << std::endl;
            file << m_movies[i].get_title() << " "<< m_movies[i].get_rating()<< " " << m_movies[i].get_duration();
            std::cout << "Yes " << std::endl;
            file.close();
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }
}
