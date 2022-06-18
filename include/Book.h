/**
 * @file Book.h
 * @brief Book派生类声明
 * 
 */
#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>
#include <string>
#include "Publication.h"
using namespace std;


/**
 * @brief 图书类（Book） 派生自（Publication）
 * 
 */
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
    virtual ~Book(); // 虚析构函数

};
#endif