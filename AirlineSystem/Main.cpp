#include "User.h"
#include "Flights.h"
#include "System.h"
#include <iostream>

int main()
{
    User user1("user1" , "info1");
    User user2("user2", "info2");
    user1.printUser();
    user2.printUser();
    Flight flight1("1", "212", "dsds", "121", "asds");
    flight1.printFlight();
    Flight flight2("2", "212", "dsds", "121", "asds");
    flight2.printFlight();
    System system;
    system.bookSeats();
    system.registerFlight(flight1);
    system.registerFlight(flight2);
    system.registerUser(user1);
    system.registerUser(user2);
    system.file();
}