#include "Xing.h"

Xing::Xing()
{
	m_no = -1;
}

ostream& operator<<(ostream& out, Xing& w)
{
	out << w.English << w.Chinese << w.m_error_time << w.m_no;
	return out;
}

istream& operator>>(istream& in, Xing& w)
{
	in >> w.English >> w.Chinese >> w.m_error_time >> w.m_no;
	return in;
}

void Xing::showself()
{
	
}