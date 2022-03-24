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
private:
	vector<BookWord> m_word;
};

