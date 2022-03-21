#pragma once
class Strategy
{
public:
	virtual int AlgorithmInterface() = 0;
	//所有的算法都要返回分数，并且必须继承重载
};

