#ifndef SYSTEM_H
#define SYSTEM_H
#include <string>
#include <fstream>
#include "Taxi.h"
#include "User.h"
#include <vector>

class System
{
    private:
        std::vector<Taxi*> m_taxi;
        std::vector<User*> m_user;
    public:
        System() = default;
        void registerTaxi(Taxi taxi);
        void registerUser(User user);
        void addToFile();
};



#endif //SYSTEM_H