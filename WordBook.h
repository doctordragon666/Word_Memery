#pragma once
#include "Bookbase.h"
#include "BookWord.h"
class WordBook :
    public Bookbase
{
public:
	WordBook();
	~WordBook();
	void show();
	vector<BookWord> getword();
	int type = 4;
private:
	vector<BookWord> m_word;
};

