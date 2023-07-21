#include "Expense.h"

Expense::Expense(const std::string& category, const std::string& date, const std::string& amount, const std::string& despriton)
{
    this->m_amount = amount;
    this->m_despriton = despriton;
    this->m_date = date;
    this->m_category = category;
}
std::string Expense::get_category() const
{
    return this->m_category;
}
std::string Expense::get_date() const
{
    return this->m_date;
}
std::string Expense::get_amount() const
{
    return this->m_amount;
}
std::string Expense::get_desprition() const
{
    return this->m_despriton;
}