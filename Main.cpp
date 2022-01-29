// word_memery.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Manager.h"
#include "User.h"
#include <ctime>
#include <random>
using namespace std;

void menu()
{
	cout << "\t\t------------------------------单词系统--------------------------------------\n\t\t||\n";
	cout << "\t\t||\t\t1.录入单词" << endl;
	cout << "\t\t||\t\t2.词库挑战" << endl;
	cout << "\t\t||\t\t3.错词挑战" << endl;
	cout << "\t\t||\t\t4.查找单词" << endl;
	cout << "\t\t||\t\t0.退出系统" << endl;
	cout << "\t\t||\t\t         请输入你的选择：_________\b\b\b\b\b\b";
}

int main()
{
	srand((unsigned int)time(NULL));
	while (true)
	{
		Manager man;
		User u;
		menu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			man.m_addWord();
			break;
		case 2:
			man.submenu();
			break;
		case 3:
			u.subMenu();
			break;
		case 4:
			man.search();
			break;
		case 0:
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}

