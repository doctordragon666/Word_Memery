#include "BookBaseBuilder.h"
#include "Exam.h"
#include "WordBook.h"
#include "Xinghuo.h"

BookBaseBuilder::BookBaseBuilder()
{
	this->m_e = new Exam();
	this->m_w = new WordBook();
	this->m_x = new Xinghuo();
}

BookBaseBuilder::~BookBaseBuilder()
{
	if (m_e&&m_w&&m_x)
	{
		delete m_e;
		delete m_w;
		delete m_x;
		m_e = nullptr;
		m_w = nullptr;
		m_x = nullptr;
	}
}