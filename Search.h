#pragma once
#include "Strategy.h"
#include "File.h"
class Search :
    public Strategy
{
public:
    Search();
    int AlgorithmInterface(Bookbase** global_b);
    bool find_mode(pair<WordInfo, string> v, string s);
};

