#include "ParkingSpace.h"


ParkingSpace::ParkingSpace(int numberSpace, SpaceSize spaceSize)
{
    this->m_numberSpace = numberSpace;
    this->m_spaceSize = spaceSize;
}

SpaceSize ParkingSpace::get_size() const
{
    return this->m_spaceSize;
}
SpaceStatus ParkingSpace::get_status() const
{
    return this->m_spaceStatus;
}
int ParkingSpace::get_number() const
{
    return this->m_numberSpace;
}



void ParkingSpace::set_status(SpaceStatus status)
{
    this->m_spaceStatus = status;
}

