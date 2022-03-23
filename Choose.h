#pragma once
#include "Strategy.h"
#include "File.h"
using namespace std;

class Choose :
    public Strategy
{
public:
    int AlgorithmInterface(Bookbase** global_b);//选择题通用接口
};

