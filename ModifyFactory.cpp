#include "ModifyFactory.h"

int ModifyFactory::AlgorithmInterface(Bookbase** global_b)
{
	Modify* mod = new Modify();
	cout << "请选择模式-1结束" << endl;
	cout << "1.增加" << endl;
	cout << "2.删除" << endl;
	cout << "3.修改" << endl;
	cout << "4.SQL" << endl;
	int choose = 0;
	cin >> choose;

	if (choose == -1)
	{
		return 0;
	}

	switch (choose)
	{
	case 1:
		mod = new Add();
		break;
	case 2:
		mod = new Del();
		break;
	case 3:
		mod = new Revise();
		break;
	case 4:
		mod = new SQL();
		break;
	default:
		break;
	}
	if (mod->ModifyAlgorithm(global_b))
	{
		cout << "修改成功" << endl;
	}
	else
	{
		cout << "修改失败请查看日志" << endl;
		Record("modify_error").Save();
	}
	return 0;
}