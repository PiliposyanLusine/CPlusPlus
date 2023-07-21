#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <fstream>
#include <string>
#include <vector>
#include "User.h"
#include "ParkingSpace.h"
#include <iostream>

class ParkingLot
{
    private:
        std::vector<User> m_users;
        std::vector<ParkingSpace> m_spaces;
        double m_price;
    public:
        ParkingLot() = default;
        ~ParkingLot() {}
        ParkingLot(User user, ParkingSpace space);
        double calculateFee(int number);
        void file();

};




#endif //PARKINGLOT_H