#include "ChooseC.h"

int ChooseC::ChooseInterface(Bookbase** global_b)
{
	vector<WordInfo> v = (*global_b)->getword();
	//根据英文选中文
	system("cls");
	int score = 0;
	if (v.size() < 4)
	{
		cout << "\t\t请添加四个单词" << endl;
		return 0;
	}
	while (true) {
		vector<int> book;
		int t = random(v.size());
		book.push_back(t);
		cout << "\t\t请选择单词“" << v[t].gete() << "”的中文意思（输入M返回菜单）：";

		string wer = v[t].getc();//正确答案
		shuffle_word(book, v.size(), 4);
		for (int i = 0; i < 4; i++) 
		{
			cout << "\t\t";
			cout.put('A' + i);
			cout << "." << v[book[i]].getc() << "     ";
		}
		cout << endl << "\t\t答案：";
		char answer;
		cin >> answer;
		if (answer == 'M') {
			cout << "\n\n\t\t本次总共得" << score << "分!!!\n\n\t\t";
			system("pause");
			system("cls");
			(*global_b)->save(v);
			return score;
		}
		while (true)
		{
			if (answer - 'A' > 4 || answer - 'A' < 0)
			{
				cout << "\n\t\t输入有误！！\n\n";
				cin >> answer;
				continue;
			}
			break;
		}
		if (v[book[answer - 'A']].getc() == wer)
		{
			cout << "\n\t\t恭喜你答对了!!!,分数：" << ++score << "\n\n\t\t" << endl;
		}
		else
		{
			cout << "\n\t\t答案错误，正确答案是：" << endl;
			cout << wer << endl << endl;
			++v[t];
		}
		cout << "\n\t\t<回车下一题>";
		system("pause");
		system("cls");
		book.clear();
	}
	return 0;
}