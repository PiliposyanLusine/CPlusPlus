#ifndef FITNESS_H
#define FITNESS_H
#include <string>
#include "Person.h"
#include <vector>
#include <fstream>
#include <iostream>

struct Level
{
    int m_massage;
    int m_fitnessarea;
    int m_pool;
};

class Fitness
{
    private:
        Level m_level;
        std::vector<Person*> m_users;
    public:
        Fitness() = default;
        void addUsers(Person person);
        void file();
        void level();
        void levelCalculete( Person person);

};




#endif //FITNESS_H