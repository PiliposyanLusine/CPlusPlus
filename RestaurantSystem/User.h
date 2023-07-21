#ifndef USER_H
#define USER_H
#include <string>
#include <iostream>


class User
{
    private:
        std::string m_name;
        std::string m_contInfo;
    public:
        User() = default;
        User(const std::string& name, const std::string& contInfo);
        std::string get_name() const;
        std::string get_contInfo() const;
        ~User() {}

};





#endif //USER_H