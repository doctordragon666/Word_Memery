#pragma once
#include "Strategy.h"
#include "Bookbase.h"
/*
算法的上下文管理器
*/

class Context
{
public:
	Context(Strategy* strategy);//传入一个算法对象，并且由这个类提供统一的接口
	void ContextInterface(unsigned int& score)
	{
		score += m_strategy->AlgorithmInterface(&global_b);//调用算法接口，然后获取返回值
		cout << "算法调用" << endl;
	}
	void setbase(Bookbase* b);
	~Context();
	Bookbase* global_b;//全局变量不能私有
private:
	Strategy* m_strategy;//唯一的私有变量，算法类
};

