
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
//	template<class T>
//	void save(vector<T> data, string filename)
//	{
//		ofstream ofs(filename, ios::out | ios::trunc);
//		for (auto it : data)
//		{
//			ofs << it << endl;
//		}
//		ofs.close();
//	}
//
//	vector<Word> addWord(vector<Word> w_lst)
//	{
//		//添加新单词
//		system("cls");
//		int k = 0;
//		cout << "\t\t请分别输入单词英文:中文意思(多个意思用/隔开)，用空格隔开,输入m表示结束:\n\n\t\t";
//		while (true)
//		{
//			string English;
//			string Chineseword;
//			//输入单英文,m结束
//			cin >> English;
//			if (English == "m")
//			{
//				system("cls");
//				if (k >= 1)
//				{
//					cout << "\n\t\t单词导入词库成功，本次共导入" << k << "个单词！！\n\n\t\t";
//				}
//				else
//				{
//					cout << "\n\t\t您没有导入任何单词！！\n\n" << endl;
//				}
//				cout << "\t\t<回车键返回菜单>";
//				system("pause");
//				system("cls");
//				return w_lst;
//			}
//			cin >> Chineseword;
//			Word w(English, Chineseword);
//			w_lst.push_back(w);
//			//单词加入词库
//			k++;//单词数统计
//			cout << "\t\t加入成功\n\t\t";
//		}
//	}
//
//	vector<Word> loadFile(string filename)
//	{
//		vector<Word> v;
//		ifstream ifs(filename, ios::in);
//		string a, b;
//		while (ifs >> a && ifs >> b)
//		{
//			v.push_back(Word(a, b));
//		}
//		sort(v.begin(), v.end(), MySort());
//		auto it = unique(v.begin(), v.end());
//		vector<Word> v_ture(v.begin(),it);
//		ifs.close();
//		save(v_ture, filename);
//		return v_ture;
//	}
//
//	vector<Error> loadFile(string filename, int tag)
//	{
//		vector<Error> v;
//		ifstream ifs(filename, ios::in);
//		string a, b;
//		int c;
//		if (tag)
//		{
//			while (ifs >> a && ifs >> b)
//			{
//				v.push_back(Error(a, b, 0));
//			}
//		}
//		else
//		{
//			while (ifs >> a && ifs >> b && ifs >> c)
//			{
//				v.push_back(Error(a, b, c));
//			}
//		}
//		ifs.close();
//		sort(v.begin(), v.end(), MySort());
//		auto it = unique(v.begin(), v.end());
//		vector<Error> v_ture(v.begin(), it);
//		ifs.close();
//		save(v_ture, filename);
//		return v;
//	}
//
//	template<class T>
//	Find_type<T> find_word(string find_word, vector<T> dic)
//	{
//		int num = 0;
//		for (auto it : dic)
//		{
//			if (it.English == find_word ||
//				find(it.Chinese_lst.begin(), it.Chinese_lst.end(), find_word) != it.Chinese_lst.end())
//			{
//				Find_type<T> tmp = { num, true, it };
//				return tmp;
//			}
//		}
//		Find_type<T> tmp = { -1, false, T() };
//		return tmp;
//	}
//
//

//
//	template<class T>
//	void dictation_c(vector<T> w_lst, vector<Error> error_lst)
//	{
//		//默写中文
//		system("cls");
//		int score = 0;
//		//保证有单词记 
//		if (w_lst.size() < 4)
//		{
//			system("pause");
//			system("cls");
//			return;
//		}
//		while (true) {
//			string msg;
//			int seed = random(w_lst.size());
//			//确定随机单词位置 
//			cout << "\t\t请输入单词“" << w_lst[seed].English << "”的中文意思（输入m返回菜单）：";
//			cin >> msg;
//			vector<string> answer = w_lst[seed].Chinese_lst;
//			if (msg == "m")
//			{
//				cout << "\n\n\t\t本次总共得" << score << "分!!!\n\n\t\t";
//				system("pause");
//				system("cls");
//				return;
//			}
//			if (find(answer.begin(), answer.end(), msg) != answer.end())
//			{
//				cout << "\n\t\t恭喜你答对了！！！,分数：" << ++score << "\n\n\t\t";
//			}
//			else
//			{
//				cout << endl << "\t\t写错了“" << w_lst[seed].English << "”的中文意思是:" << w_lst[seed].Chinese;
//				auto error = find_word(w_lst[seed].English, error_lst);
//				if (error.tag)
//					++error_lst[error.serial];
//				else
//					error_lst.push_back(Error(w_lst[seed].English, w_lst[seed].Chinese, 0));
//				save(error_lst, USER_FILE);
//			}
//			cout << "\n\t\t<回车下一题>";
//			system("pause");
//			system("cls");
//		}
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
