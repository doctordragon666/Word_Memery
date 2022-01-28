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
	cout << "\t\t------------------------------单词系统--------------------------------------" << endl << endl;
	cout << "\t\t\t\t1.录入单词" << endl;
	cout << "\t\t\t\t2.词库挑战" << endl;
	cout << "\t\t\t\t3.错词挑战" << endl;
	cout << "\t\t\t\t4.查找单词" << endl;
	cout << "\t\t\t\t0.退出系统" << endl;
	cout << "\t\t\t\t         请输入你的选择：_________\b\b\b\b\b\b";
}

int main()
{
	srand((unsigned int)time(NULL));
	Manager man;
	User u;
	while (true)
	{
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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
