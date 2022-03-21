#pragma once
#include "Strategy.h"
class Show :
    public Strategy
{
public:
    int AlgorithmInterface();
};

class ShowLog : public Show
{
public:
    ShowLog()
    {

    }
};