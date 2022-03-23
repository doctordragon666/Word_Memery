#include "Bookbase.h"

Bookbase::Bookbase()
{
	cout << "总书库创建";
}

void Bookbase::Load()
{
	cout << "load";
	//fstream fs(WORD_FILE, ios::out);
	//char buf[100] = "";
	//if (!fs.is_open())
	//{
	//	cout << "文件打开失败";
	//	return;
	//}
	//while (fs.getline(buf, sizeof(buf)/sizeof(char)))
	//{
	//	cout << buf << endl;
	//	system("pause");
	//}
}

Bookbase::~Bookbase()
{
	cout << "总书库析构";
}