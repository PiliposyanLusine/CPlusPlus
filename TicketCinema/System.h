#ifndef SYSTEM_H
#define SYSTEM_H
#include <string>
#include <iostream>
#include <vector>
#include "User.h"
#include "Movie.h"
#include <fstream>

class System
{
    private:
        std::string m_ticket;
        std::vector<std::string> m_seats;
        std::vector<User> m_users;
        std::vector<Movie> m_movies;
    public:
        System() = default;
        System(const std::string& ticket);
        void add_user(const std::string& name, const std::string& contInfo);
        void add_movie(const std::string& title, const std::string& duration, const std::string& rating);

        void file();
};


#endif //SYSTEM_H