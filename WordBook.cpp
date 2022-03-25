#include "WordBook.h"

WordBook::WordBook()
{
	cout << "总书库创建" << endl;
	cout << "总书库开始加载" << endl;
	ifstream ifs(TEXT_FILE, ios::out);
	if (!ifs.is_open())
	{
		cout << "文件打开失败";
		return;
	}
	BookWord w;
	while (ifs >> w) //逐行读取，直到结束
	{
		this->m_word.push_back(w);
	}
	ifs.close();
}

WordBook::~WordBook()
{
	ofstream ofs(TEXT_FILE, ios::in | ios::trunc);
	if (!ofs.is_open())
	{
		cout << "文件打开失败";
		return;
	}
	for (vector<BookWord>::iterator it = m_word.begin(); it != m_word.end(); it++)
	{
		ofs << *it;
	}
	ofs.close();
	this->m_word.clear();
}

void WordBook::show()
{
	for (auto i : m_word)
	{
		cout << i;
	}
}

vector<pair<WordInfo, string>> WordBook::getword()
{
	vector<pair<WordInfo, string>> v;
	WordInfo w;
	for (auto i : m_word)
	{
		w = i;
		v.push_back(make_pair(w, i.getbook() + " " + to_string(i.getunit())));
	}
	return v;
}

void WordBook::save(vector<pair<WordInfo, string>> v)
{
	m_word.clear();
	for (auto i : v)
	{
		BookWord bw(i.first, i.second);
		m_word.push_back(bw);
	}
}