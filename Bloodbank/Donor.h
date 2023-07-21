#ifndef DONOR_H
#define DONOR_H
#include <string>

class Donor
{
    private:
        std::string m_name;
        std::string m_conInfo;
        std::string m_bloodType;
    public:
        Donor() = default;
        Donor(const std::string& name, const std::string& conInfo, const std::string& bloodtype);
        std::string get_name() const;
        std::string get_conInfo() const;
        std::string get_bloodType() const;
};




#endif //DONOR_H