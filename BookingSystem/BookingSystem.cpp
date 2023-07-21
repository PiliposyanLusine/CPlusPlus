#include "BookingSystem.h"

void BookingSystem::registerPackage(const std::string& destination, int price, int availableSlots, int bookedSlots)
{
    TravelPackage travelPackage(destination, price, availableSlots, bookedSlots );
    m_travelPackage.push_back(&travelPackage);
}
void BookingSystem::registerUser(const std::string& name, const std::string& contactInfo)
{
    User user(name, contactInfo);
    m_users.push_back(&user);
}
std::vector<TravelPackage> BookingSystem::searchPackages(double maxPrice, int requiredSlots)
{
    std::vector<TravelPackage> searchResults;
    for(int i = 0; i < m_travelPackage.size(); ++i)
    {
        if(m_travelPackage[i]->get_price() <= maxPrice && m_travelPackage[i]->get_availableSlots() >= requiredSlots)
        {
            searchResults.push_back(*m_travelPackage[i]);
        }
    }
    return searchResults;
}

void BookingSystem::generateReport()
{
    std::ofstream file("report.txt");
    if(file.is_open())
    {
        file << "Travel Package Report\n";
                file << "-----------------------------\n";
                for (const auto& package : m_travelPackage) {
                    file << "Destination: " << package->get_destination() << std::endl;
                    file << "Price: " << package->get_price() << std::endl;
                    file << "Available Slots: " << package->get_availableSlots() << std::endl;
                    file << "Booked Slots: " << package->get_bookedSlots() << std::endl;
                    file << "-----------------------------\n";
                }
                file.close();
                std::cout << "Report generated successfully!\n";
    } 
    else 
        {
            std::cout << "Unable to generate the report.\n";
        }
}
