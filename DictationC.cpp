#include "DictationC.h"

int DictationC::DictationAlgorithm(Bookbase** global_b)
{
	//默写中文
	system("cls");
	int score = 0;
	vector<pair<WordInfo, string>> v = (*global_b)->getword();
	//保证有单词记 
	if (v.empty())
	{
		system("pause");
		system("cls");
		return 0;
	}
	while (true) {
		string msg;
		int seed = random(v.size());
		//确定随机单词位置 
		cout << "\t\t请输入单词“" << v[seed].first.gete() << "”的中文意思（输入M返回菜单）：";
		cin >> msg;
		vector<string> answer = v[seed].first.getcl();
		if (msg == "M")
		{
			cout << "\n\n\t\t本次总共得" << score << "分!!!\n\n\t\t";
			system("pause");
			system("cls");
			return score;
		}
		if (find(answer.begin(), answer.end(), msg) != answer.end())
		{
			cout << "\n\t\t恭喜你答对了！！！,分数：" << ++score << "\n\n\t\t";
		}
		else
		{
			cout << endl << "\t\t写错了“" << v[seed].first.gete() << "”的中文意思是:" << v[seed].first.getc();
			++v[seed].first;
		}
		cout << "\n\t\t<回车下一题>";
		system("pause");
		system("cls");
	}
}