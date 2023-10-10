#include <cstring>

#include "exception.h"

Exception::Exception(const char *message)
{
    strcpy_s(m_message, message);
}

const char *Exception::get_message() const
{
    return m_message;
}
