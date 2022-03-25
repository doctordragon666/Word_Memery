#pragma once
#include "Bookbase.h"
#include "ExamWord.h"
class Exam :
    public Bookbase
{
public:
    Exam();
    ~Exam();
    vector<pair<WordInfo, string>> getword();
    const int type = 2;
    void save(vector<pair<WordInfo, string>> v);
    void show();
private:
    vector<ExamWord> m_word;
};

