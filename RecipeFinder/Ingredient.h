#ifndef INGREDIENT_H
#define INGREDIENT_H
#include <string>

class Ingredient
{
    private:
        std::string m_ingredient;
    public:
        Ingredient() = default;
        Ingredient(const std::string& ingredient);
        std::string get_ingredient() const;
};
#endif //INGREDIENT_H
