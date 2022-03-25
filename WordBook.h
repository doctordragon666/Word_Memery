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
	vector<pair<WordInfo, string>> getword();
	const int type = 4;
	void save(vector<pair<WordInfo, string>> v);
private:
	vector<BookWord> m_word;
};

