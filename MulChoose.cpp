#include "MulChoose.h"

int MulChoose::ChooseInterface(Bookbase** global_b)
{
	system("cls");
	cout << "请输入你的选项，最大不超过10";
	int num;
	cin >> num;
	vector<pair<WordInfo, string>> w_lst = (*global_b)->getword();
	int score = 0;
	//根据中文选择英文
	system("cls");
	if (w_lst.size() < num)
	{
		cout << "单词不足";
		system("pause");
		system("cls");
		return 0;
	}
	while (true)
	{
		vector<int> book;
		int t = random(w_lst.size());
		book.push_back(t);
		cout << "\t\t请选择中文“" << w_lst[t].first.getcl()[random(w_lst[t].first.getcl().size())] << "”的英语单词（输入M返回菜单）：";

		string wer = w_lst[t].first.gete();//存好答案; 
		//初始化选项
		shuffle_word(book, w_lst.size(), num);
		for (int i = 0; i < num; i++)
		{
			cout << "\t\t";
			cout.put('A' + i) << "." << w_lst[book[i]].first.gete() << "     ";
		}
		cout << "\n\n\t\t答案：";
		//输入答案
		char answer;
		cin >> answer;
		if (answer == 'M') {
			cout << "\n\n\t\t本次总共得" << score << "分!!!\n\n\t\t";
			system("pause");
			system("cls");
			return score;
		}
		while (true)
		{
			if (answer - 'A' > num)
			{
				cout << "\n\t\t输入有误！！\n\n";
				cin >> answer;
				continue;
			}
			break;
		}
		if (w_lst[book[answer - 'A']].first.gete() == wer)
		{
			cout << "\n\t\t恭喜你答对了!!!,分数：" << ++score << "\n\n\t\t";
		}
		else
		{
			cout << "\n\t\t\a答案错误，正确答案是：" << wer << endl;
			++w_lst[t].first;
		}
		cout << "\n\t\t<回车下一题>";
		system("pause");
		system("cls");
		book.clear();
	}
	return 0;
}