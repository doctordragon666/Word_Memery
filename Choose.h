#pragma once
#include "File.h"
#include "Bookbase.h"
using namespace std;

class Choose
{
public:
    virtual int ChooseInterface(Bookbase** global_b);//选择题通用接口
    template<class T>
	void shuffle_word(vector<T>& v, size_t s, int num)
	{
		//将该数组打乱并且返回若干个数组中的元素
		while (v.size() < num)
		{
			int tmp = random(s);
			if (find(v.begin(), v.end(), tmp) == v.end())
			{
				v.push_back(tmp);
			}
		}
		random_shuffle(v.begin(), v.end());
		cout << endl << endl;
	}
};

