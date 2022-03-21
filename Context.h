#pragma once
#include "Strategy.h"
/*
算法的上下文管理器
*/

class Context
{
public:
	Context(Strategy* strategy) :m_strategy(strategy) {}//传入一个算法对象，并且由这个类提供统一的接口
	void ContextInterface(unsigned int& score)
	{
		score += m_strategy->AlgorithmInterface();//调用算法接口，然后获取返回值
	}
private:
	Strategy* m_strategy;//唯一的私有变量，算法类
};

