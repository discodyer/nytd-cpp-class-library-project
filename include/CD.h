/**
 * @file CD.h
 * @brief CD派生类声明
 * 
 */
#ifndef CD_H_
#define CD_H_
#include <iostream>
#include <string>
#include "Publication.h"
using namespace std;


/**
 * @brief 光盘类（CD）派生自（Publication）
 * 
 */
class CD: public Publication
{
private:
    string publisher; // 出版社
    string time; // 视频时长
    int year; // 年份

public:
    CD(); // 无参构造函数
    CD(string num, string title, string author, string rating, 
        string publisher, string time, int year); // 构造函数
    CD(const CD &CD); // 复制构造函数
    
    string getPublisher(); // 获取出品者
    string getTime(); // 获取视频时长
    int getYear(); // 获取年份
    virtual void output(); // 展示信息
    virtual void input(); // 输入信息

    virtual ~CD();
};

#endif