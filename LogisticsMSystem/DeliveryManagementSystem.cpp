#include "DeliveryManagementSystem.h"


void DeliveryManagementSystem::registerDelivery(Delivery delivery)
{
    m_deliveries.push_back(&delivery);
}

void DeliveryManagementSystem::updateStatus(int deliveryIndex, const std::string& newStatus)
{
    if(deliveryIndex >= 0 && deliveryIndex < m_deliveries.size())
    {
        m_deliveries[deliveryIndex]->get_status() = newStatus;   
    }
}