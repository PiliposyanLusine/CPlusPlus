#ifndef USER_H
#define USER_H
#include <string>

class User
{
    private:
        std::string m_name;
        std::string m_contInfo;
        std::string m_resume;
    public:
        User() = default;
        User(const std::string& name, const std::string& contInfo, const std::string& resume);

        std::string get_name() const;
        std::string get_contInfo() const;
        std::string get_resume() const;
};



#endif //USER_H