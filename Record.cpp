#include "Record.h"
#include "Config.h"

Record::Record(unsigned int score)
{
	time_t now = time(NULL);
	struct tm* nowtime = new tm();
	localtime_s(nowtime, &now);

	this->m_score = score;
	this->m_date = to_string(nowtime->tm_year+1900) + ":" + to_string(nowtime->tm_mon + 1) + ":" + to_string(nowtime->tm_mday)
		+ " " + to_string(nowtime->tm_hour) + ":" + to_string(nowtime->tm_min) + ":" + to_string(nowtime->tm_sec);
	delete nowtime;
}

void Record::Save()
{
	ofstream ofs(RECORD_FILE, ios::app);
	if (!ofs.is_open())
	{
		printf("error, file is not open");
	}

	ofs << *this;
}

string Record::GetDate() const
{
	return m_date;
}

void Record::SetScore(unsigned int score)
{
	m_score = score;
}

std::ostream& operator<<(std::ostream& in, Record r)
{
	in << r.m_date << "\t" << r.m_score << "\n";
	return in;
}

std::istream& operator>>(std::istream& in, Record r)
{
	in >> r.m_date >> r.m_score;
	return in;
}