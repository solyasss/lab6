#include "divide_by_zero.h"

divide_by_zero::divide_by_zero(const char *message) : Exception(message)
{
}

const char *divide_by_zero::get_message() const
{
    return m_message;
}
