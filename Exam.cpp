#include "Exam.h"

Exam::Exam()
{
	cout << "考试库开始加载" << endl;
	ifstream ifs(EXAM_FILE, ios::out);
	if (!ifs.is_open())
	{
		cout << "文件打开失败";
		return;
	}
	ExamWord ew;
	while (ifs >> ew) //逐行读取，直到结束
	{
		cout << ew;
		this->m_word.push_back(ew);
	}
	ifs.close();
}

Exam::~Exam()
{
	ofstream ofs(EXAM_FILE, ios::in | ios::trunc);
	if (!ofs.is_open())
	{
		cout << "文件打开失败";
		return;
	}
	for (vector<ExamWord>::iterator it = m_word.begin(); it != m_word.end(); it++)
	{
		ofs << *it;
	}
	ofs.close();
	this->m_word.clear();
	cout << "exam考试题库已经删除";
}

vector<pair<WordInfo, string>> Exam::getword()
{
	vector<pair<WordInfo, string>> v;
	WordInfo w;
	for (auto i : m_word)
	{
		w = i;
		v.push_back(make_pair(i, i.getsource()));
	}
	return v;
}

void Exam::save(vector<pair<WordInfo, string>> v)
{
	m_word.clear();
	for (auto i : v)
	{
		ExamWord ew(i.first, i.second);
		m_word.push_back(ew);
	}
}

void Exam::show()
{
	vector<ExamWord> listen;
	vector<ExamWord> passage;
	vector<ExamWord> translate;
	vector<ExamWord> write;
	string s[4] = {"listen", "passage", "translate", "write"};
	for (auto i : m_word)
	{
		if (i.getsource() == "listen")
		{
			listen.push_back(i);
		}
		else if (i.getsource() == "passage")
		{
			passage.push_back(i);
		}
		else if (i.getsource() == "translate")
		{
			translate.push_back(i);
		}
		else if (i.getsource() == "write")
		{
			write.push_back(i);
		}
		else
		{
			continue;
		}
	}

	vector<vector<ExamWord>> v;
	v.push_back(listen);
	v.push_back(passage);
	v.push_back(translate);
	v.push_back(write);
	
	int type_num = 0;

	for (auto i : v)
	{
		cout << s[type_num++] << endl;
		for (auto j : i)
		{
			j.showself();
		}
		cout << "---------------" << endl;
	}
}


void Exam::example()
{
	cout << "英语空格汉语空格来源" << endl;
}