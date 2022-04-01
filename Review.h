#pragma once
#include "Strategy.h"
#include "Dictation.h"
#include "DictationC.h"
#include "DictationE.h"

class Review :
    public Strategy
{
    int AlgorithmInterface(Bookbase** global_b);
};

