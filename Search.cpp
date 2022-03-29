#include "Search.h"
Search::Search()
{
	cout << "搜索模式开启" << endl;
}

int Search::AlgorithmInterface(Bookbase** global_b)
{
	vector<pair<WordInfo, string>> v = (*global_b)->getword();
	string s;
	bool flag = true;
	int i;
	while (true)
	{
		cout << "请输入你要查找的内容, 输入M结束";
		cin >> s;
		if (s == "M")
		{
			break;
		}
		for (i = 0; i < v.size(); i++)
		{
			if (find_mode(v[i], s))
			{
				cout << "已找到";
				v[i].first.showself();
				flag = false;
			}
		}
		if (flag)
		{
			cout << "查找失败，是否添加该单词?Y/N";
			string choose;
			cin >> choose;
			if (choose == "Y")
			{
				cout << "请输入完备信息例下" << endl;
				v[0].first.showself();
				cout << "未完待续" << endl;
			}
		}
	}
	return 0;
}

bool Search::find_mode(pair<WordInfo, string> v, string s)
{
	vector<string> cl = v.first.getcl();
	return (find(cl.begin(), cl.end(), s) != cl.end()) || (v.first.gete().find(s) != -1);
}