#ifndef USER_H
#define USER_H
#include <string>

class User
{
    private:
        std::string m_name;
        std::string m_contInfo;
    public:
        User() = default;
        User(const std::string& name, const std::string& contInfo);
        ~User() {}
        std::string get_name() const;
        std::string get_contInfo() const;
};




#endif //USER_H
