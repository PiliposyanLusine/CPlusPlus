#ifndef TRAVELPACKAGE_H
#define TRAVELPACKAGE_H
#include <string>

class TravelPackage
{
    private:
        std::string m_destination;
        int m_price;
        int m_availableSlots;
        int m_bookedSlots;
    public:
        TravelPackage(const std::string& destination, int price, int availableSlots, int bookedSlots);
        TravelPackage(){}
        ~TravelPackage() {}

        std::string get_destination() const;
        int get_price() const;
        int get_availableSlots() const;
        int get_bookedSlots() const;

        bool bookSlot(); 
};

#endif //TRAVELPACKAGE_H