#pragma once
#include "File.h"
//记录类：记录每一次的记录方便生成记忆曲线

class Record
{
public:
	Record(unsigned int score);
	std::string GetDate() const;
	void SetScore(unsigned int score);
	friend std::ostream& operator<<(std::ostream& in, Record r);
	friend std::istream& operator>>(std::istream& out, Record r);
	void Save();
private:
	std::string m_date;
	unsigned int m_score;
};

