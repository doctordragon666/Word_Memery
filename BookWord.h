#pragma once
#include "WordInfo.h"
class BookWord :
    public WordInfo
{
public:
	void showself();
	BookWord();
	BookWord(WordInfo w, string s);
	BookWord& operator++();
	friend ostream& operator<<(ostream& out, BookWord& w);
	friend istream& operator>>(istream& in, BookWord& w);
	bool operator==(BookWord& a);
	int getunit() const;
	string getbook() const;
private:
	int unit;
	string book;
};

