#include "Revise.h"

bool Revise::ModifyAlgorithm(Bookbase** global_b)
{
	system("cls");
	vector<pair<WordInfo, string>> target = (*global_b)->getword();
	Show().AlgorithmInterface(global_b);
	bool flag = true;
	string s = "";
	if ((*global_b)->type == 1)
	{
		flag = false;
	}

	while (true)
	{
		cout << "请输入你要修改的号码, 按-1退出修改";
		int num;
		cin >> num;
		if (num == -1)
		{
			return false;
		}
		(*global_b)->example();
		cout << "按M键退出" << endl;

		string e;
		string c;
		cin >> e;

		if (e == "M")
		{
			break;
		}
		cin >> c;

		if (flag)
		{
			cin >> s;
		}

		WordInfo w(e, c);
		target[num] = make_pair(w, s);

		cout << endl << "添加成功" << endl;
	}

	(*global_b)->save(target);

	return true;
}