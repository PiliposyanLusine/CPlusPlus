#ifndef DELIVERY_H
#define DELIVERY_H
#include <string>
#include "User.h"
#include <iostream>
#include <fstream>

class Delivery
{
    private:
        std::string m_item;
        std::string m_origin;
        std::string m_destination;
        std::string m_time;
        std::string m_status;
        User m_user;    
    public:
        Delivery() = default;
        ~Delivery(){}
        Delivery(const std::string& item, const std::string& origin, const std::string& destination, const std::string& time, const std::string& status, const User& user); 
        std::string get_item() const;
        std::string get_origin() const;
        std::string get_destination() const;
        std::string get_time() const;
        std::string get_status() const;

        void file();

};




#endif //DELIVERY_H