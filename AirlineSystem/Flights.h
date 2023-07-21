#ifndef FILGHTS_H
#define FILGHTS_H
#include <string>
#include <iostream>

class Flight
{
    private:
        std::string m_number;
        std::string m_origin;
        std::string m_destination;
        std::string m_date;
        std::string m_time;
        int m_seats = 10;
    public:
        Flight() = default;
        ~Flight() {}
        Flight(const std::string& number, const std::string& origin, const std::string& destination, const std::string& date, const std::string& time);

        std::string get_number() const;
        std::string get_origin() const;
        std::string get_destination() const;
        std::string get_date() const;
        std::string get_time() const;
        int get_seats() const;
        void printFlight();


};




#endif //FILGHTS_H