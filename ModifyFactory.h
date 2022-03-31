#pragma once
#include "Strategy.h"
#include "Modify.h"
#include "Add.h"
#include "Del.h"
#include "Revise.h"
#include "SQL.h"
#include "Record.h"
class ModifyFactory :
    public Strategy
{
public:
    int AlgorithmInterface(Bookbase** global_b);
};

