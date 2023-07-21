#include <iostream>
#include "Customer.h"
#include "System.h"
#include "Room.h"

int main()
{
    Customer customer1("name1", "info1");
    customer1.print();
    Customer customer2("name2", "info2");
    customer2.print();

    Room room1;
    room1.setNumberStyle(1);
    Room room2;
    room2.setNumberStyle(2);

    System system;
    system.addCustomer(customer1);
    system.addCustomer(customer2);
    system.addRoom(room1);
    system.addRoom(room2);

    system.file();


}