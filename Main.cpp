/*
项目名称：单词记忆系统
需求分析：
增删改查
*/
#define _CRT_SECURE_NO_WARNINGS
#include "Config.h"
extern Bookbase* base;

void menu()
{
	cout << "------------------------------单词系统-----------------------------------\n||\n" << internal;
	cout << "||\t\t1.选择题" << endl;
	cout << "||\t\t2.默写题" << endl;
	cout << "||\t\t3.斩词" << endl;
	cout << "||\t\t4.查看记录" << endl;
	cout << "||\t\t5.更换词库" << endl;
	cout << "||\t\t0.退出系统" << endl;
	cout << "||\t\t         请输入你的选择：_________\b\b\b\b\b\b";
}

int main()
{
	unsigned int score = 0; //初始化积分
	//预先加载各个词库
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
	base->Load();
	Record(score).Save();
	system("pause");
	return 0;
}

