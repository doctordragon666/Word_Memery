#pragma once
#include "File.h"
#include "WordInfo.h"
class Xing :
    public WordInfo
{
public:
	void showself();
	Xing();
	friend ostream& operator<<(ostream& out, Xing& w);
	friend istream& operator>>(istream& in, Xing& w);
	//bool operator==(WordInfo& a);
private:
    int m_no;//第几组的题目
};

