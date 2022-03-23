#pragma once
#include "File.h"
#include "WordInfo.h"
class Bookbase
{
public:
	//构造的时候把show的指针直接重写
	Bookbase();
	void Load();
	~Bookbase();
protected:
	vector<WordInfo> m_word;
};

