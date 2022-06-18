/**
 * @file Picture.h
 * @brief Picture派生类声明
 * 
 */
#ifndef PICTURE_H_
#define PICTURE_H_
#include <iostream>
#include <string>
#include "Publication.h"
using namespace std;

/**
 * @brief 图片类（Picture）继承自（Publication）
 * 
 */
class Picture: public Publication
{
private:
    string nation; // 国籍
    string size; // 尺寸

public:
    Picture(); // 无参构造函数
    Picture(string num, string title, string author, string rating,
            string nation, string size); // 构造函数
    Picture(const Picture &pic); // 复制构造函数
    
    string getNation(); // 获取编号
    string getSize(); // 获取ISBN
    virtual void output(); // 展示信息
    virtual void input(); // 输入信息

    virtual ~Picture();
};

#endif