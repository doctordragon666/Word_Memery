#pragma once
#include "Modify.h"
#include "Show.h"
class Del :
    public Modify
{
public:
    bool ModifyAlgorithm(Bookbase** global_b);
};

