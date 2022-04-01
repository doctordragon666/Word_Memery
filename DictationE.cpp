#include "DictationE.h"

int DictationE::DictationAlgorithm(Bookbase** global_b)
{
	//默写英文
	system("cls");
	string answer;
	int score = 0;
	vector<pair<WordInfo, string>> v = (*global_b)->getword();
	//保证有单词记 
	if (v.empty())
	{
		system("pause");
		system("cls");
		return score;
	}
	while (true) 
	{
		int s = random(v.size());
		auto t = v[s].first.getcl()[random(v[s].first.getcl().size())];
		cout << "\t\t请输入单词“" << t << "”的英文意思（输入M返回菜单）：";
		cin >> answer;
		if (answer == "M")
		{
			cout << "\n\n\t\t本次总共得" << score << "分!!!\n\n\t\t";
			system("pause");
			system("cls");
			return score;
		}
		if (v[s].first.gete() == answer) {
			cout << "\n\t\t恭喜你答对了！！！,分数：" << ++score << "\n\n\t\t";
		}
		else {
			cout << endl << "\t\t答错了“" << t << "”的英文是:" << v[s].first.gete() << endl << endl;
			++v[s].first;
		}
		cout << "\n\t\t<回车下一题>";
		system("pause");
		system("cls");
	}
}