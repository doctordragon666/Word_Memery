#pragma once
#include "Bookbase.h"
#include "ExamWord.h"
class Exam :
    public Bookbase
{
public:
    Exam();
    ~Exam();
    vector<ExamWord> getexam();
    void show();
private:
    vector<ExamWord> m_word;
};

