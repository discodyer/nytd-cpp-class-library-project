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
private:
    string press; // 出版社
    string ISBN; // ISBN
    int pages; // 页数
    int year; // 年份

public:
    Book(); // 无参构造函数
    Book(string num, string title, string author, string rating, 
        string press, string ISBN, int pages, int year); // 构造函数
    Book(const Book &book); // 复制构造函数
    
    string getPress(); // 获取编号
    string getISBN(); // 获取ISBN
    int getPages(); // 获取页数
    int getYear(); // 获取年份
    virtual void output(); // 展示信息
    virtual void input(); // 输入信息
    virtual ~Book();

};
#endif