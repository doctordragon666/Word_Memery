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
	vector<WordInfo> getword();
	const int type = 0;
	virtual void save(vector<WordInfo> v);
protected:
	vector<WordInfo> m_word;
};

