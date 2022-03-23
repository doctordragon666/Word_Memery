#pragma once
#include "Strategy.h"
class Kill :
    public Strategy
{
public:
    int AlgorithmInterface(Bookbase** global_b);
};

