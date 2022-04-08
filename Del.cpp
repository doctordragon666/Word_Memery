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
			cout << (*(target.begin() + num-1)).first;
			swap(*(target.begin() + num-1), *(target.end()-1));
			target.pop_back();
			cout << "É¾³ý³É¹¦\n";
		}
	}

	(*global_b)->save(target);

	return true;
}