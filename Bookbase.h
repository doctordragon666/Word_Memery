#pragma once
#include "File.h"
#include "WordInfo.h"
#include "Show.h"
class Bookbase
{
public:
	//构造的时候把show的指针直接重写
	virtual void Load() {}
protected:
	vector<WordInfo> m_word;
	Show show;//定义Show的指针
};

