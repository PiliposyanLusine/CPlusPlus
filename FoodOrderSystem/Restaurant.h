#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>

class Restaurant
{
    private:
        std::string m_name;
        std::string m_menu;
        std::string m_location;
    public:
        Restaurant() = default;
        Restaurant(const std::string& name, const std::string& menu, const std::string& location);


        std::string get_name() const;
        std::string get_menu() const;
        std::string get_location() const;
};





#endif //RESTAURANT_H