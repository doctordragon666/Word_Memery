#include "Memery.h"

int Memery::AlgorithmInterface(Bookbase** global_b)
{
	vector<pair<WordInfo, string>> v = (*global_b)->getword();
	int error_word = 0;
	bool flag = false;

	cout << "请输入你的目标单词个数" << endl;
	int target = 0;
	cin >> target;
	map<int, pair<WordInfo, string>> target_word;
	while (target_word.size() < target)
	{
		int t = random(v.size());
		target_word.insert(make_pair(t, v[t]));
	}
	cout << "抽取完毕" << endl;
	for (auto i : target_word)
	{
		cout << i.first << i.second.first;
	}
	system("pause");
	system("cls");

	while (true)
	{
		for (map<int, pair<WordInfo, string>>::iterator it = target_word.begin(); it != target_word.end(); it++)
		{
			it->second.first.showself();
			system("pause");
			system("cls");
			cout << it->second.first.getc();
			cout << "请输入意思" << endl;
			string mean;
			cin >> mean;
			if (mean == it->second.first.gete())
			{
				continue;
			}
			else if (mean == "M")
			{
				break;
			}
			else
			{
				cout << "输入错误,正确答案是" << it->second.first.gete();
				error_word++;
				it--;
			}
		}
		if (1.0 * error_word / (double)target < 0.001)
		{
			cout << "记忆完成" << endl;
			Record r("本次一共记住了" + to_string(target) + "个单词");
			r.Save();
			break;
			system("pause");
		}
		else
		{
			cout << "请继续记忆" << endl;
		}
	}
	return 0;
}