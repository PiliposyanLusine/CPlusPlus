#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <vector>

class Movie
{
    private:
        std::string m_title;
        std::string m_duration;
        std::string m_rating;
        std::vector<std::string> m_showtime;
    public:
        Movie() = default;
        Movie(const std::string& title, const std::string& duration, const std::string& rating);
        std::string get_title() const;
        std::string get_duration() const;
        std::string get_rating() const;
        std::vector<std::string> get_showtime() const;
        void registorShowTime(const std::string& time);
};





#endif //MOVIE_H