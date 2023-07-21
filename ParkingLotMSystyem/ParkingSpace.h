#ifndef PARKINGSPACE_H
#define PARKINGSPACE_H
#include <string>

enum class SpaceSize
{
    Compact, Regular, Large
};

enum class SpaceStatus
{
    Available, Occupied
};


class ParkingSpace
{
    private:
        SpaceSize m_spaceSize;
        SpaceStatus m_spaceStatus;
        int m_numberSpace;
    public:
        ParkingSpace() = default;
        ParkingSpace(int numberSpace, SpaceSize spaceSize);

        SpaceSize get_size() const;
        SpaceStatus get_status() const;
        int get_number() const;
        void set_status(SpaceStatus status);
};






#endif //PARKINGSPACE_H