#pragma once
#include <iostream>
#include <random>
#include <vector>
#include <fstream>
#include <algorithm>
#include "Word.h"
#include "File.h"
using namespace std;

int random(int num) { return rand() % num; }

template<class T>
void shuffle_word(vector<T>& v, const int s, int num=v.size())
{
	//将该数组打乱并且返回若干个数组中的元素
	while (v.size() < num)
	{
		int tmp = random(s);
		if (find(v.begin(), v.end(), tmp) == v.end())
		{
			v.push_back(tmp);
		}
	}
	random_shuffle(v.begin(), v.end());
	cout << endl << endl;
}

vector<string> split(string& s, char c)
{
	vector<string> v;
	string behind;
	string end = s;
	while (end != "")
	{
		size_t pos = end.find(c);
		if (pos != -1)
		{
			behind = end.substr(0, pos);
			if (behind != "")
			{
				v.push_back(behind);
			}
			end = end.substr(pos + 1, s.size());
		}
		else
		{
			v.push_back(end);
			break;
		}
	}
	return v;
}

void save(vector<Word> data, string filename)
{
	ofstream ofs(filename, ios::out | ios::trunc);
	for (auto it:data)
	{
		ofs << it << endl;
	}
	ofs.close();
}

vector<Word> addWord(vector<Word> w_lst)
{
	//添加新单词
	system("cls");
	int k = 0;
	cout << "\t\t请分别输入单词英文:中文意思(多个意思用/隔开)，用空格隔开,输入m表示结束:\n\n\t\t";
	while (true)
	{
		string English;
		string Chineseword;
		//输入单英文,m结束
		cin >> English;
		if (English == "m")
		{
			system("cls");
			if (k >= 1)
			{
				cout<<"\n单词导入词库成功，本次共导入"<<k<<"个单词！！\n\n";
			}
			else
			{
				cout << "\n您没有导入任何单词！！\n\n" << endl;
			}
			cout << "\t\t<回车键返回菜单>";
			system("pause");
			system("cls");
			return w_lst;
		}
		//输入单词中文 
		cin >> Chineseword;
		//单词添加到map中
		Word w(English, Chineseword);
		w_lst.push_back(w);
		//单词加入词库
		k++;//单词数统计
		cout << "\t\t加入成功" << endl;
	}
}

vector<Word> loadFile(string filename)
{
	vector<Word> v;
	ifstream ifs(filename, ios::in);
	string a, b;
	int c;
	while (ifs >> a && ifs >> b && ifs >> c)
	{
		v.push_back(Word(a, b, c));
	}
	ifs.close();
	return v;
}

pair<bool, Word> find(string find_word, vector<Word> dic)
{
	for (auto it : dic)
	{
		if (it.English == find_word || 
			find(it.Chinese_lst.begin(), it.Chinese_lst.end(), find_word) != it.Chinese_lst.end())
		{
			return make_pair(true, it);
		}
	}
	return make_pair(false, Word(find_word, find_word));
}

