#include "BookWord.h"

void BookWord::showself()
{
	cout << English << Chinese << m_error_time << "第" << unit << "单元 来源：" << book << endl;
}

BookWord::BookWord()
{
	m_error_time = 0;
	unit = 0;
}

BookWord::BookWord(WordInfo w, string s)
{
	vector<string> tmp = split(s, ' ');
	if (tmp.size() < 2)
	{
		cout << "参数传递有误，请重启程序";
		exit(0);
	}
	this->book = tmp[0];
	this->unit = stoi(tmp[1]);
	this->Chinese = w.getc();
	this->English = w.gete();
	this->m_error_time = w.gettime();
}

BookWord& BookWord::operator++()
{
	++m_error_time;
	return *this;//返回引用，因为每次只能对同一it相加
}

ostream& operator<<(ostream& out, BookWord& w)
{
	out << w.English << " " << w.Chinese << " " << w.m_error_time <<
		" " << w.unit << " " << w.book << "\n";
	return out;
}

istream& operator>>(istream& in, BookWord& w)
{
	in >> w.English >> w.Chinese >> w.m_error_time >> w.unit >> w.book;
	return in;
}

bool BookWord::operator==(BookWord& a)
{
	if (a.English == this->English)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string BookWord::getbook() const
{
	return book;
}

int BookWord::getunit() const
{
	return unit;
}