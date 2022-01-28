#pragma once
#include <iostream>
using namespace std;
class User
{
public:
	User();
	void subMenu();
private:
	vector<Word> self_dic;
};

User::User()
{
	self_dic = loadFile(USER_FILE);
}

void User::subMenu()
{
	cout << "\t\t------------------------------词库挑战--------------------------------------" << endl << endl;
	cout << "\t\t\t\t1.单选题中" << endl;
	cout << "\t\t\t\t2.单选题英" << endl;
	cout << "\t\t\t\t3.默写题中" << endl;
	cout << "\t\t\t\t4.默写题英" << endl;
	cout << "\t\t\t\t5.斩词模式" << endl;
	cout << "\t\t\t\t0.退出挑战" << endl;
	cout << "\t\t\t\t         请输入你的选择：_________\b\b\b\b\b\b";
}