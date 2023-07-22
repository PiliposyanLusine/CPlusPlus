#ifndef BOOK_H
#define BOOK_H
#include <string>



class Book
{
    private:
        std::string m_title;
        std::string m_auther;
        std::string m_genre;
    public:
        Book() = default;
        Book(const std::string& title, const std::string& auther, const std::string& genre);

        std::string get_title() const;
        std::string get_auther() const;
        std::string get_genre() const;

};




#endif //BOOK_H