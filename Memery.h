#pragma once
#include "Strategy.h"
#include "Record.h"
class Memery :
    public Strategy
{
public:
    int AlgorithmInterface(Bookbase** global_b);
};

