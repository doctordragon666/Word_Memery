#include "Del.h"

bool Del::ModifyAlgorithm(Bookbase** global_b)
{
	vector<pair<WordInfo, string>> target = (*global_b)->getword();
	Show().AlgorithmInterface(global_b);


	while (true)
	{
		cout << "ÇëÊäÈëÉ¾³ýµÄµ¥´Ê±àºÅ, -1½áÊø";
		int num;
		cin >> num;
		if (num == -1)
		{
			break;
		}
		else
		{
			target.erase(target.begin() + num);
		}
	}

	(*global_b)->save(target);

	return true;
}