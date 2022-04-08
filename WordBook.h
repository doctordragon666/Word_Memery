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
	void save(vector<pair<WordInfo, string>> v);
private:
	vector<BookWord> m_word;
};

