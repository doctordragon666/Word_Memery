#pragma once
#include "Modify.h"
class SQL :
    public Modify
{
public:
    bool ModifyAlgorithm(Bookbase** global_b);
};

