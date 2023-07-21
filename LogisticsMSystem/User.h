#ifndef USER_H
#define USER_H
#include <string>

class User
{
    private:
        std::string m_name;
        std::string m_contactInfo;
    public:
        User() = default;
        User(const std::string& name, const std::string& contactInfo);
        ~User() {}
        std::string get_name() const;
        std::string get_contactInfo() const;
};





#endif //USER_H