#include "Change.h"
#include "Bookbase.h"
#include "Exam.h"
#include "Xinghuo.h"
#include "WordBook.h"
#include "Bookbase.h"

Bookbase* base;

Change::Change()
{
	cout << "改变词库类型" << endl;
	cout << "1.总词库" << endl;
	cout << "2.考试词库" << endl;
	cout << "3.星火词库" << endl;
	cout << "4.书本词库" << endl;
	cout << "0.取消更改" << endl;
	cout << "你确定要更改吗？请输入词库类别（每次仅允许一次操作）" << endl;
}

int Change::AlgorithmInterface(Bookbase** global_b)
{
	int choose = 0;
	cin >> choose;
	switch (choose)
	{
	case 1:
		*global_b = new Bookbase();
		break;
	case 2:
		*global_b = new Exam();
		break;
	case 3:
		*global_b = new Xinghuo();
		break;
	case 4:
		*global_b = new WordBook();
		break;
	case 0:
		break;
	default:
		break;
	}
	system("pause");
	system("cls");
	return 0;//返回0，因为更换书库不增加任何的分数
}