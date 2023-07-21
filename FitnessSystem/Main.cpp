#include "Person.h"
#include "Fitness.h"
#include <iostream>

int main()
{
    Person person1("Name1", "info1", "14.04", "Standard");
    Person person2("Name2", "info2", "14", "Premium");
    Person person3("Name3", "info3", "14.04", "AllIncluded");
    Fitness fitness;
    fitness.addUsers(person1);
    fitness.addUsers(person2);
    fitness.addUsers(person3);
    fitness.levelCalculete(person1);
    fitness.levelCalculete(person2);
    fitness.levelCalculete(person3);
    fitness.level();
    fitness.file();

}