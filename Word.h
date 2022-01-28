#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Function.h"
using namespace std;

vector<string> split(string& s, char c);

class Word
{
public:
	Word(string e, string c);
	Word(string e, string c, int num);
	void show(vector<string> v);
	void show();
	friend ostream& operator <<(ostream& out, Word w);
	string Chinese;
	string English;
	pair<string, string> dic;
	vector<string> Chinese_lst;
	int error_time = 0;
};

Word::Word(string e, string c)
{
	this->English = e;
	this->Chinese_lst = split(c, '/');
	this->dic = make_pair(e, c);
	this->Chinese = c;
}

Word::Word(string e, string c, int num)
{
	this->English = e;
	this->Chinese_lst = split(c, '/');
	this->dic = make_pair(e, c);
	this->Chinese = c;
	int error_time = num;
}

void Word::show(vector<string> v)
{
	cout << "它的汉语意思有：" << endl;
	for (auto i : v)
	{
		cout << "\t\t" << i << endl;
	}
}

void Word::show()
{
	cout << endl << "\t\t单词" << dic.first;
	show(Chinese_lst);
}

ostream& operator <<(ostream& out, Word w)
{
	out << w.English << " " << w.Chinese;
	return out;
}