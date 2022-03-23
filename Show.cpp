#include "Show.h"


int Show::AlgorithmInterface(Bookbase** global_b)
{
	if (!global_b)
	{
		cout << "ÇëÖØÊÔ" << endl;
		return 0;
	}
	if (*global_b == nullptr)
	{
		cout << "ÇëÖØÊÔ" << endl;
		return 0;
	}
	vector<WordInfo> v = (*global_b)->getword();
	if (v.size() != 0)
	{
		for (vector<WordInfo>::iterator it = v.begin(); it != v.end(); it++)
		{
			cout << (*it);
		}
	}
	return 0;
}