#include "Add.h"

bool Add::ModifyAlgorithm(Bookbase** global_b)
{
	system("cls");
	vector<pair<WordInfo, string>> target = (*global_b)->getword();
	cout << "请输入添加的单词信息， 示例如下" << endl;
	(*global_b)->example();
	cout << "按M键退出" << endl;
	bool flag = true;
	string s = "";// 剩下的内容交给wordinfo去解析
	if ((*global_b)->getword()[0].second == "")
	{
		flag = false;
	}

	while (true)
	{
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
		target.push_back(make_pair(w, s));

		cout << endl << "添加成功" << endl;
		cout.flush();
	}

	(*global_b)->save(target);
	cout << "已经保存完成";
	return true;
}