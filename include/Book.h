/**
 * @file Book.h
 * @author your name (you@domain.com)
 * @brief Book派生类声明
 * @version 0.1
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>
#include <string>
#include "Publication.h"
using namespace std;

class Book: public Publication
{
protected:
    string press; // 出版社
    string ISBN; // ISBN
    string pages; // 页数
    string year; // 年份

public:
    Book(); // 无参构造函数
    Book(string num, string title, string author, string rating, string press, string ISBN, string pages, string year); // 构造函数
    Book(const Book &book); // 复制构造函数
    
    string getPress(); // 获取编号
    string getISBN(); // 获取ISBN
    string getPages(); // 获取页数
    string getYear(); // 获取年份
    void showInfo(); // 展示信息
    void Input(); // 输入信息

};

#endif