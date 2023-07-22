#include "Customer.h"
#include "Restaurant.h"
#include "System.h"
#include <iostream>


int main()
{
    Customer cus("fsdfs", "fdssf", "fsd");
    Customer cuss("dsfds", "sdf","fdsf");
    Restaurant res("dsfd","fdf","fdfd");
    System system(11, "wdsdf", res, cus);
    system.file();
}