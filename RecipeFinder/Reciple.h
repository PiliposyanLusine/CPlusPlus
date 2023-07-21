#ifndef RECIPLE_H
#define RECIPLE_H
#include <vector>
#include "Ingredient.h"
#include <string>

class Reciple
{
    private:
        std::string m_name;
        std::string m_instruction;
        std::vector<Ingredient*> m_ingredients;
    public:
        Reciple() = default;
        Reciple(const std::string& name, const std::string& instruction);
        void addIngredient(Ingredient ingredient);
        std::string get_name() const;
        std::string get_instruction() const;
};



#endif //RECIPLE_H