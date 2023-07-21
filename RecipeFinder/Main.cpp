#include "Reciple.h"
#include "Collection.h"
#include "Ingredient.h"
#include <iostream>

int main()
{
    Ingredient ing("fsdf");
    Ingredient ingg("sdfsf");
    Reciple rec("sdfs", "sdfsdf");
    Reciple recc("fsdfd", "sdfs");
    rec.addIngredient(ing);
    rec.addIngredient(ingg);
    Collection coll;
    coll.save(rec);
    coll.search(recc);
    coll.file(rec);
}