#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <iostream>



class Room 
{
    private:
        bool m_available = true;
        std::string m_Number;
    public:

    void setNumberStyle(int myNumber);
    std::string getNumberStyle();
};

#endif //ROOM_H