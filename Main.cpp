/*
项目名称：单词记忆系统
需求分析：
增删改查
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Manager.h"
#include "User.h"
#include <ctime>
#include <random>
#include "Config.h"
using namespace std;

void menu()
{
	cout << "\t\t------------------------------单词系统--------------------------------------\n\t\t||\n" << internal;
	cout << "\t\t||\t\t1.选择题" << endl;
	cout << "\t\t||\t\t2.默写题" << endl;
	cout << "\t\t||\t\t3.斩词" << endl;
	cout << "\t\t||\t\t4.查看记录" << endl;
	cout << "\t\t||\t\t5.显示词库" << endl;
	cout << "\t\t||\t\t0.退出系统" << endl;
	cout << "\t\t||\t\t         请输入你的选择：_________\b\b\b\b\b\b";
}

int main()
{
	unsigned int score = 0; //初始化积分

	while (true)
	{
		menu();
		int choose = -1;
		cin >> choose;

		Context* context = AlgorithmFactory::CreateContext(choose);
		context->ContextInterface();
	}

	Record(score).Save();
	return 0;
}

