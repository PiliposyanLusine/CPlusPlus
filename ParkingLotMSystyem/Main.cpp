#include "ParkingLot.h"
#include "ParkingSpace.h"
#include "User.h"
#include <iostream>

int main()
{
    User user1("John Doe", SpaceSize::Compact);
    User user2("Jane Smith", SpaceSize::Large);
    ParkingSpace space1(1,SpaceSize::Large);
    ParkingSpace space2(2,SpaceSize::Large);
    ParkingLot p1(user1, space1);
    ParkingLot p2(user2, space2);
    p1.file();
    p2.file();

}