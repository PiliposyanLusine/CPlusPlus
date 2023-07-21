#include "Reciple.h"

Reciple::Reciple(const std::string& name, const std::string& instruction)
{
    this->m_name = name;
    this->m_instruction = instruction;
}
std::string Reciple::get_name() const
{
    return this->m_name;
}
std::string Reciple::get_instruction() const
{
    return this->m_instruction;
}

void Reciple::addIngredient(Ingredient ingredient)
{
    m_ingredients.push_back(&ingredient);
}