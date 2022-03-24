#pragma once
#include "Choose.h"
#include "WordInfo.h"
#include "BookWord.h"
#include "ExamWord.h"
#include "Exam.h"
class ChooseC :
    public Choose
{
public:
    int ChooseInterface(Bookbase** global_b);//实现英选中的接口
};

