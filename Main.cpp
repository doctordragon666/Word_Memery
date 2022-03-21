﻿/*
项目名称：单词记忆系统
需求分析：
增删改查
*/
#define _CRT_SECURE_NO_WARNINGS
#include "Config.h"

void menu()
{
	cout << "\t\t------------------------------单词系统-----------------------------------\n\t\t||\n" << internal;
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
	//预先加载各个词库
	extern Bookbase* base;
	while (true)
	{
		//主循环开始根据输入来执行不同的算法
		menu();
		int choose = -1;
		cin >> choose;
		if (!isrange(choose))
		{
			continue;
		}
		Context* context = AlgorithmFactory::CreateContext(choose);
		if (context)
		{
			context->ContextInterface(score);
		}
		else
		{
			break;//返回为空的时候终止程序
		}
	}
	//程序结束保存结果
	Record(score).Save();
	return 0;
}

