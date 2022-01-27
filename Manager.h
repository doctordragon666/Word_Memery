#pragma once
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
class Manager
{
public:
	Manager();
	~Manager();
	void menu();
private:

};

void Manager::menu()
{
	cout << "单词系统" << endl << endl;
	cout << "1.录入单词" << endl;
	cout << "\t\t\t\t         请输入你的选择：_________\b\b\b\b\b\b";
}

Manager::Manager()
{
}

Manager::~Manager()
{
}