#include "Kill.h"

int Kill::AlgorithmInterface(Bookbase** global_b)
{
	vector<WordInfo> v = (*global_b)->getword();
	size_t i = 0;
	if (v.size() == 0)
	{
		cout << "单词为空";
	}
	while (true)
	{
		v[i].showself();
		cout << endl << "是否要删掉这个单词K,返回上一级A, 退出按M: \t";
		char c = 'D';
		cin >> c;
		switch (c)
		{
		case 'K':
			v.erase(v.begin() + i);
			i++;
			break;
		case 'A':
			if (i!=1)
			{
				i--;
			}
			break;
		case 'M':
			i = v.size();
			break;
		default:
			i++;
			break;
		}
		if (v.size() == 0 ||  i == v.size())
		{
			break;
		}
	}

	(*global_b)->save(v);
	return 0;
}