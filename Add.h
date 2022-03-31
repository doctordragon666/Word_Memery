#pragma once
#include "Modify.h"
class Add :
    public Modify
{
public:
    bool ModifyAlgorithm(Bookbase** global_b);
};

