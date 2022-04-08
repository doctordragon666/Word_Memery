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

Record::Record(string s)
{
	this->error = s;
	time_t now = time(NULL);
	struct tm* nowtime = new tm();
	localtime_s(nowtime, &now);

	this->m_date = to_string(nowtime->tm_year + 1900) + ":" + to_string(nowtime->tm_mon + 1) + ":" + to_string(nowtime->tm_mday)
		+ " " + to_string(nowtime->tm_hour) + ":" + to_string(nowtime->tm_min) + ":" + to_string(nowtime->tm_sec);
	delete nowtime;
	nowtime = nullptr;
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

std::ostream& operator<<(std::ostream& out, Record r)
{
	if (r.error == "")
	{
		out << r.m_date << "\t" << r.m_score << "\n";
	}
	else
	{
		out << r.m_date << "\t" << r.error << "\n";
	}
	return out;
}

std::istream& operator>>(std::istream& in, Record r)
{
	in >> r.m_date >> r.m_score;
	return in;
}