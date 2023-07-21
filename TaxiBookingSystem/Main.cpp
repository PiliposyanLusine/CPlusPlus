#include "User.h"
#include "Taxi.h"
#include "System.h"
#include <iostream>


int main()
{
    User user1("User1", "Info1");
    User user2("User2", "Info2");
    Taxi taxi1("032MP33", "Piliposyan");
    Taxi taxi2("032DP33", "Piliposyan");
    taxi1.moneyTaxi("start", 12);
    taxi2.moneyTaxi("Comfort", 12);
    taxi2.status("Blocked");
    taxi1.status("Blocked");
    System system;
    system.registerTaxi(taxi1);
    system.registerTaxi(taxi2);
    system.registerUser(user1);
    system.registerUser(user2);
    system.addToFile();
}