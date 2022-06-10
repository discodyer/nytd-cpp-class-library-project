/**
 * @file Publication.h
 * @author your name (you@domain.com)
 * @brief Publication基类声明
 * @version 0.1
 * @date 2022-06-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef PUBLICATION_H_
#define PUBLICATION_H_
#include <iostream>
#include <string>
using namespace std;

class Publication
{
protected:
    string number; // 编号
    string title; // 标题
    string author; // 作者
    string rating; // 评级
public:
    Publication(); // 无参构造函数
    Publication(string num, string title, string author, string rating); // 构造函数
    Publication(const Publication &pub); // 复制构造函数
    
    string getNumber(); // 获取编号
    string getTitle(); // 获取标题
    string getAuthor(); // 获取作者 
    string getRating(); // 获取评级

    void setRating(); // 设置评级

    void showInfo(); // 展示信息
    void Input(); // 输入信息
};
#endif
