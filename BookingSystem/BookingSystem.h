#ifndef BOOKINGSYSTEM_H
#define BOOKINGSYSTEM_H
#include <vector>
#include "User.h"
#include "TravelPackage.h"
#include <fstream>
#include <iostream>

class BookingSystem
{
    private:
        std::vector<User*> m_users;
        std::vector<TravelPackage*> m_travelPackage;
    public:
        void registerPackage(const std::string& destination, int price, int availableSlots, int bookedSlots);
        void registerUser(const std::string& name, const std::string& contactInfo);
        std::vector<TravelPackage> searchPackages(double maxPrice, int requiredSlots);
        void generateReport();
};





#endif //BOOKINGSYSTEM_H