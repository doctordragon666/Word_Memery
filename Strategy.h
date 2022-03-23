#pragma once
#include "Bookbase.h"
class Strategy
{
public:
	virtual int AlgorithmInterface(Bookbase** global_b) = 0;
	//所有的算法都要返回分数，并且必须继承重载
};

