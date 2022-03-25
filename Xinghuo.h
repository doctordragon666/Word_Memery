#pragma once
#include "Bookbase.h"
#include "Xing.h"
class Xinghuo :
    public Bookbase
{
public:
    Xinghuo();
    //~Xinghuo();
    //void show();
    //virtual vector<pair<WordInfo, string>> getword();
    //const int type = 1;
    //void save(vector<pair<WordInfo, string>> v);
    //记忆模式
    //读取自己的文件
    //放入单词列表中
    //按照组名来进行抽取
    //显示方法：按类别和组来表示
private:
    vector<Xing> m_word;//单词列表
    //用户错误的单词列表
};

