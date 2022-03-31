#pragma once
#include "Modify.h"
#include "Show.h"
class Revise :
    public Modify
{
public:
    bool ModifyAlgorithm(Bookbase** global_b);
};

