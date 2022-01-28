#pragma once
#include <iostream>
#include "Function.h"
using namespace std;
class User
{
public:
	User();
	void subMenu();
	void choose_c();
	void choose_e();
	void dictation_c();
	void dictation_e();
private:
	vector<Error> self_dic;
	void kill_word();
};

User::User()
{
	self_dic = f.loadFile(USER_FILE,0);
}

void User::subMenu()
{
	bool active = true;
	while (active)
	{
		system("cls");
		cout << "\t\t------------------------------词库挑战--------------------------------------" << endl << endl;
		cout << "\t\t\t\t1.单选题中" << endl;
		cout << "\t\t\t\t2.单选题英" << endl;
		cout << "\t\t\t\t3.默写题中" << endl;
		cout << "\t\t\t\t4.默写题英" << endl;
		cout << "\t\t\t\t5.斩词模式" << endl;
		cout << "\t\t\t\t0.退出挑战" << endl;
		cout << "\t\t\t\t         请输入你的选择：_________\b\b\b\b\b\b";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			active = false;
			system("cls");
			break;
		case 1:
			choose_c();
			break;
		case 2:
			choose_e();
			break;
		case 3:
			dictation_c();
			break;
		case 4:
			dictation_e();
			break;
		case 5:
			kill_word();
		default:
			break;
		}
	}
}

void User::choose_c()
{
	f.choose_c(self_dic, self_dic);
}

void User::choose_e()
{
	f.choose_e(self_dic, self_dic);
}

void User::dictation_c()
{
	f.dictation_c(self_dic, self_dic);
}

void User::dictation_e()
{
	f.dictation_e(self_dic, self_dic);
}

void User::kill_word()
{
	system("cls");
	for (auto i : self_dic)
	{
		i.show();
		cout << "\n\n\t\t是否要斩掉这个单词(按k斩,0退出,其他键继续): ";
		string tip;
		cin >> tip;
		if (tip == "k")
		{
			self_dic.push_back(i);
			cout << "\t\t已经删除";
		}
		else if(tip == "0")
		{
			break;
		}
		else
		{
			;
		}
		system("cls");
	}
	f.save(self_dic, USER_FILE);
}