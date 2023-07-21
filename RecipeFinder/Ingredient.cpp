#include "Ingredient.h"

Ingredient::Ingredient(const std::string& ingredient)
{
    this->m_ingredient = ingredient;
}
std::string Ingredient::get_ingredient() const
{
    return this->m_ingredient;
}