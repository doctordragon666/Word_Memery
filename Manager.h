//#pragma once
//#include <iostream>
//#include <map>
//#include <algorithm>
//#include "Function.h"
//#include "File.h"
//using namespace std;
//
///*
//
//定义了管理员，从整体上管理这个文件，不可以清除用户的数据
//构造函数
//成员：1.自定义词库
//	 2.错误词库
//接口：
//1.子菜单
//2.添加单词
//3.查找
//4.添加单词
//5.选择题中
//6.选择题英
//7.默写题中
//8.默写题英
//
//*/
//
//class Manager
//{
//public:
//	Manager();
//	void submenu();
//	void m_addWord();
//	void choose_c();
//	void choose_e();
//	void dictation_c();
//	void dictation_e();
//	void search();
//private:
//	vector<Word> dic;
//	vector<Error> error;
//};
//
//void Manager::submenu()
//{
//	bool active = true;
//	while (active)
//	{
//		system("cls");
//		cout << "\t\t------------------------------词库挑战--------------------------------------\n\t\t**\n";
//		cout << "\t\t**\t\t1.单选题中" << endl;
//		cout << "\t\t**\t\t2.单选题英" << endl;
//		cout << "\t\t**\t\t3.默写题中" << endl;
//		cout << "\t\t**\t\t4.默写题英" << endl;
//		cout << "\t\t**\t\t0.退出挑战" << endl;
//		cout << "\t\t\t\t         请输入你的选择：_________\b\b\b\b\b\b";
//		int choice;
//		cin >> choice;
//		switch (choice)
//		{
//		case 0:
//			active = false;
//			system("cls");
//			break;
//		case 1:
//			choose_c();
//			break;
//		case 2:
//			choose_e();
//			break;
//		case 3:
//			dictation_c();
//			break;
//		case 4:
//			dictation_e();
//			break;
//		default:
//			break;
//		}
//	}
//}
//
//Manager::Manager()
//{
//	dic = f.loadFile(WORD_FILE);
//	error = f.loadFile(USER_FILE,0);
//}
//
//void Manager::m_addWord()
//{
//	f.save(f.addWord(dic),WORD_FILE);
//}
//
//void Manager::search()
//{
//	system("cls");
//	while (true)
//	{
//		string find_word;
//		cout << "\t\t请输入你要查找的单词/中文: 输入m结束: ";
//		cin >> find_word;
//		if (find_word == "m")
//		{
//			system("cls");
//			break;
//		}
//		auto result = f.find_word(find_word, dic);
//		if (result.tag)
//		{
//			cout << endl << "\t\t已找到" << endl;
//			result.v.show();
//		}
//		else
//		{
//			cout << endl << "\t\t单词不存在，请先加入词库" << endl;
//		}
//		printf("\t\t<回车继续查找>");
//		system("pause");
//		system("cls");
//	}
//}
//
//void Manager::choose_c()
//{
//	f.choose_c(dic, error);
//}
//
//void Manager::choose_e()
//{
//	f.choose_e(dic, error);
//}
//
//void Manager::dictation_c()
//{
//	f.dictation_c(dic, error);
//}
//
//void Manager::dictation_e()
//{
//	f.dictation_e(dic, error);
//}