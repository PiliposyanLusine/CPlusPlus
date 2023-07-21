#ifndef DELIVERYMANAGEMENTSYSTEM_h
#define DELIVERYMANAGEMENTSYSTEM_h
#include <vector>
#include "Delivery.h"

class DeliveryManagementSystem 
{
    private:
        std::vector<Delivery*> m_deliveries;

    public:
        void registerDelivery(Delivery delivery);
        void updateStatus(int deliveryIndex, const std::string& newStatus);
        
};



#endif //DELIVERYMANAGEMENTSYSTEM_h