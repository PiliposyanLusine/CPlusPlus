#ifndef USER_H
#define USER_H
#include <string>
#include "ParkingSpace.h"

class User
{
    private:
        std::string m_name;
        SpaceSize m_info;
    public:
        User() = default;
        ~User() {}
        User(const std::string& name, const SpaceSize info);
        std::string get_name() const;
        SpaceSize get_info() const;
};



#endif //USER_H