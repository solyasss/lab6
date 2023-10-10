#pragma once
#include "exception.h"

class divide_by_zero : public Exception
{
public:
    divide_by_zero(const char *message);
    virtual const char *get_message() const;
};
