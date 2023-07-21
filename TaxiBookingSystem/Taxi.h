#ifndef TAXI_H
#define TAXI_H
#include <string>
#include <iostream>

struct Status
{
    std::string s1 = "Available";
    std::string s2 = "Booked";
};

struct Class
{
    std::string s1 = "Start";
    std::string s2 = "Comfort";
    std::string s3 = "Business";
};

class Taxi
{
    private:
        std::string m_number;
        std::string m_nameDirver;
        Status m_status;
        Class m_class;
    public:
        Taxi() = default;
        Taxi(const std::string& number, const std::string& nameDriver);
        std::string get_number() const;
        std::string get_nameDriver() const;
        double moneyTaxi(std::string str, double km);
        void status(std::string str);

};


#endif //TAXI_H