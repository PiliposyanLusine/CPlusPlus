#include "Donor.h"
#include "BloodBank.h"
#include <iostream>

int main()
{
    BloodBank Bp;
    Bp.donateBlood(2, "A+");
    Bp.generateMonthlyReport("may");
    Bp.registerDonor("Name", "fhkks", "A+");
    Bp.utilizeBlood(2, "A+");
}