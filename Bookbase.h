#pragma once
#include "File.h"
#include "WordInfo.h"
class Bookbase
{
public:
	//构造的时候把show的指针直接重写
	Bookbase();
	~Bookbase();
	virtual void show();
	virtual vector<pair<WordInfo, string>> getword();
	const int type = 1;
	virtual void save(vector<pair<WordInfo, string>> v);
protected:
	vector<WordInfo> m_word;
};

