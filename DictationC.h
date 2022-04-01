#pragma once
#include "File.h"
#include "Dictation.h"
#include "WordInfo.h"
class DictationC :
    public Dictation
{
public:
    int DictationAlgorithm(Bookbase** global_b);
};

