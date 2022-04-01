//此版本为古老版本， 现在已经废弃，仅供参考
/*
定义全局函数的类以及一些结构，以及仿函数谓词
结构体：查找返回类型（序号，返回逻辑，返回对象）
类封装的函数
1.添加单词
2.选择题中
3.选择题英
4.默写题中
5.默写题英
6.加载文件，重载两个版本
7.随机函数，重载两个版本
8.根据数据保存格式保存到文件
9.打乱选择题选项。
10.保存记录
仿函数谓词
给不同的类型建立谓词
*/
//
//template<typename T>
//struct Find_type
//{
//	int serial;
//	bool tag;
//	T v;
//};
//
//class MySort
//{
//public:
//	bool operator()(Error a, Error b)
//	{
//		return a.error_time < b.error_time;
//	}
//	bool operator()(Word a, Word b)
//	{
//		return a.English < b.English;
//	}
//};
//
//
//class Fun
//{
//	template<class T>
//	void shuffle_word(vector<T>& v, size_t s, int num)
//	{
//		//将该数组打乱并且返回若干个数组中的元素
//		while (v.size() < num)
//		{
//			int tmp = random(s);
//			if (find(v.begin(), v.end(), tmp) == v.end())
//			{
//				v.push_back(tmp);
//			}
//		}
//		random_shuffle(v.begin(), v.end());
//		cout << endl << endl;
//	}
//
//
//	}
//
//
//

//	}
//
//	template<class T>
//	void dictation_e(vector<T> w_lst, vector<Error> error_lst)
//	{
//		//默写英文
//		system("cls");
//		string answer;
//		int score = 0;
//		//保证有单词记 
//		if (w_lst.size() == 0)
//		{
//			system("pause");
//			system("cls");
//			return;
//		}
//		while (true) 
//		{
//			int s = random(w_lst.size());
//			auto t = w_lst[s].Chinese_lst[random(w_lst[s].Chinese_lst.size())];
//			cout << "\t\t请输入单词“" << t << "”的英文意思（输入m返回菜单）：";
//			cin >> answer;
//			if (answer == "m")
//			{
//				cout << "\n\n\t\t本次总共得" << score << "分!!!\n\n\t\t";
//				system("pause");
//				system("cls");
//				break;
//			}
//			if (w_lst[s].English == answer) {
//				cout << "\n\t\t恭喜你答对了！！！,分数：" << ++score << "\n\n\t\t";
//			}
//			else {
//				cout << endl << "\t\t答错了“" << t << "”的英文是:" << w_lst[s].English << endl << endl;
//				auto error = find_word(w_lst[s].English, error_lst);
//				if (error.tag)
//					++error_lst[error.serial];
//				else
//					error_lst.push_back(Error(w_lst[s].English, w_lst[s].Chinese, 0));
//				save(error_lst, USER_FILE);
//			}
//			cout << "\n\t\t<回车下一题>";
//			system("pause");
//			system("cls");
//		}
//	}
//};
//
//Fun f;
