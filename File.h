#pragma once
/*
定义程序使用到的文件名
1.用户文件
2.词库文件
3.自定义文件
4.记录文件
5.考试文件
*/
#define WORD_FILE "word.txt"
#define BASE_FILE "base.txt"
#define USER_FILE "user.txt"
#define RECORD_FILE "record.txt"
#define EXAM_FILE ".\\base\\exam.txt"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

inline bool isrange(int choose)
{
	return choose < 7 && choose > 0;
}