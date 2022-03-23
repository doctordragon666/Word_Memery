#pragma once
#include "Strategy.h"
#include "File.h"
class Change :
    public Strategy
{
public:
    Change();
    int AlgorithmInterface(Bookbase** global_b);
};

