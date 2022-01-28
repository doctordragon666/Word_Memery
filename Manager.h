#pragma once
#include <iostream>
#include <map>
#include <algorithm>
#include "Function.h"
#include "File.h"
using namespace std;
class Manager
{
public:
	Manager();
	void submenu();
	void m_addWord();
	void search();
private:
	vector<Word> dic;
};

void Manager::submenu()
{
	bool active = true;
	while (active)
	{
		cout << "\t\t------------------------------词库挑战--------------------------------------" << endl << endl;
		cout << "\t\t\t\t1.单选题中" << endl;
		cout << "\t\t\t\t2.单选题英" << endl;
		cout << "\t\t\t\t3.默写题中" << endl;
		cout << "\t\t\t\t4.默写题英" << endl;
		cout << "\t\t\t\t4.默写题英" << endl;
		cout << "\t\t\t\t         请输入你的选择：_________\b\b\b\b\b\b";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			active = false;
			break;
		case 1:
			
		default:
			break;
		}
	}
}

Manager::Manager()
{
	dic = loadFile(WORD_FILE);
}

void Manager::m_addWord()
{
	save(addWord(dic),WORD_FILE);
}

void Manager::search()
{
	system("cls");
	while (true)
	{
		string find_word;
		cout << "\t\t请输入你要查找的单词/中文: 输入m结束: ";
		cin >> find_word;
		if (find_word == "m")
		{
			system("cls");
			break;
		}
		pair<bool, Word> result = find(find_word, dic);
		if (result.first)
		{
			cout << endl << "\t\t已找到" << endl;
			result.second.show();
		}
		else
		{
			cout << endl << "\t\t单词不存在，请先加入词库" << endl;
		}
		printf("\t\t<回车继续查找>");
		system("pause");
		system("cls");
	}
}
