#pragma once
#include "Dictation.h"
#include "WordInfo.h"
class DictationE :
    public Dictation
{
public:
    int DictationAlgorithm(Bookbase** global_b);
};

