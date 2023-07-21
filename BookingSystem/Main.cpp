#include "BookingSystem.h"
#include "TravelPackage.h"
#include "User.h"
#include <iostream>


int main()
{
    BookingSystem system;

    system.registerPackage("Destination A", 100.0, 5, 8);
    system.registerUser("John Doe", "john@example.com");
    
}