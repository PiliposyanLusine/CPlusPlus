#include "Delivery.h"
#include "DeliveryManagementSystem.h"
#include "User.h"
#include <iostream>

int main()
{
    User user("name", "con info");
    std::cout << "User: "<< user.get_contactInfo() << user.get_name() << std::endl;
    Delivery delivery("item", "origin", "destination", "time", "status", user);
    delivery.file();
    DeliveryManagementSystem system;
    system.registerDelivery(delivery);
    system.updateStatus(0,"hello");
}