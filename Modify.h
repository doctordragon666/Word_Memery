#pragma once
#include "Bookbase.h"
class Modify
{
public:
	virtual bool ModifyAlgorithm(Bookbase** global_b) { return false; }
};

