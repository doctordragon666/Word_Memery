#include "Show.h"


int Show::AlgorithmInterface(Bookbase** global_b)
{
	if (!global_b)
	{
		cout << "请重试" << endl;
		return 0;
	}
	if (*global_b == nullptr)
	{
		cout << "请重试" << endl;
		return 0;
	}
	(*global_b)->show();
	cout << "显示算法调用" << endl;
	return 0;
}