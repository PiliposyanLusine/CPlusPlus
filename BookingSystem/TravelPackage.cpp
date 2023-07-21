#include "TravelPackage.h"

TravelPackage::TravelPackage(const std::string& destination, int price, int availableSlots, int bookedSlots)
{
    this->m_destination = destination;
    this->m_price = price;
    this->m_bookedSlots = bookedSlots;
    this->m_availableSlots = availableSlots;
}
std::string TravelPackage::get_destination() const
{
    return this->m_destination;
}
int TravelPackage::get_price() const
{
    return this->m_price;
}
int TravelPackage::get_availableSlots() const
{
    return this->m_availableSlots;
}
int TravelPackage::get_bookedSlots() const
{
    return this->m_bookedSlots;
}

bool TravelPackage::bookSlot()
{
    if(m_availableSlots > 0)
    {
        m_availableSlots--;
        m_bookedSlots++;
        return true;
    }
    return false;
}
