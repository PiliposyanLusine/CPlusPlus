#ifndef PERSON_H
#define PERSON_H
#include <string>



class Person
{
    private:
        std::string m_name;
        std::string m_contInfo;
        std::string m_date;
        std::string m_level;
    public:
        Person() = default;
        Person(const std::string& name, const std::string& continfo, const std::string& date, const std::string& level);

        std::string get_name() const;
        std::string get_contInfo() const;
        std::string get_date() const;
        std::string get_level() const;
};



#endif //PERSON_H