#ifndef EXPENSE_H
#define EXPENSE_H
#include <string>

class Expense
{
    private:
        std::string m_category;
        std::string m_date;
        std::string m_amount;
        std::string m_despriton;
    public:
        Expense() = default;
        Expense(const std::string& category, const std::string& date, const std::string& amount, const std::string& despriton);

        std::string get_category() const;
        std::string get_date() const;
        std::string get_amount() const;
        std::string get_desprition() const;
};


#endif //EXPENSE_H