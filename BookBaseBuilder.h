#pragma once
#include "File.h"
#include "Exam.h"
#include "WordBook.h"
#include "Xinghuo.h"
class BookBaseBuilder
{
public:
	BookBaseBuilder();
	~BookBaseBuilder();
	void GetBookBase(string b) const
	{
		if (b == "exam")
		{
			 base = m_e;
		}
		else if (b == "xinghuo")
		{
			 base = m_x;
		}
		else if (b == "wordbook")
		{
			base = m_w;
		}
	}
private:
	Exam* m_e;
	Xinghuo* m_x;
	WordBook* m_w;
};

