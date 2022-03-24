#pragma once
/*
定义了单词类，分为两种（做成虚接口）
一、存储在词库中的单词
接口：
1.无参构造和有参构造
2.显示对象（格式化）
3.重载恒等于，用来去重复
属性：
1.中文
2.英文
3.中英字典
4.一词多义
二、存储在用户中的单词
继承了1
接口：4.重载了++号，增加错误次数
属性：5.错误次数
出于数据的需要，还定义了一个字符处理函数，分割某个特定的符号
*/

#include "File.h"
class WordInfo
{
public:
	virtual void showself();
	WordInfo();
	WordInfo& operator++()
	{
		++m_error_time;
		return *this;//返回引用，因为每次只能对同一it相加
	}
	friend ostream& operator<<(ostream& out, WordInfo& w);
	friend istream& operator>>(istream& in, WordInfo& w);
	bool operator==(WordInfo& a);
protected:
	int m_error_time;
	string Chinese;
	string English;
};

