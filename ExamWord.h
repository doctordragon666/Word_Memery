#pragma once
#include "WordInfo.h"
#include "File.h"
class ExamWord :
    public WordInfo
{
public:
	void showself();
	ExamWord();
	string getsource();
	ExamWord& operator++();
	friend ostream& operator<<(ostream& out, ExamWord& w);
	friend istream& operator>>(istream& in, ExamWord& w);
	bool operator==(ExamWord& a);
private:
	string source;
};

