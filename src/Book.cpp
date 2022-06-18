/**
 * @file Book.cpp
 * @author your name (you@domain.com)
 * @brief Book类实现
 * @version 0.1
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Book.h"

/**
 * @brief Construct a new Book:: Book object
 * 
 */
Book::Book():Publication()
{
    type = "图书";
    press = ""; // 出版社
    ISBN = ""; // ISBN
    pages = 0; // 页数
    year = 0; // 年份
}

/**
 * @brief Construct a new Book:: Book object
 * 
 * @param num 
 * @param title 
 * @param author 
 * @param rating 
 * @param press 
 * @param ISBN 
 * @param pages 
 * @param year 
 */
Book::Book(string num, 
            string title, 
            string author, 
            string rating, 
            string press, 
            string ISBN, 
            int pages, 
            int year)
            : Publication(num, title, author, rating)
{
    this->press = press;
    this->ISBN = ISBN;
    this->pages = pages;
    this->year = year;
}

/**
 * @brief Construct a new Book:: Book object
 * 
 * @param Book 
 */
Book::Book(const Book &book):Publication(book)
{
    this->press = book.press;
    this->ISBN = book.ISBN;
    this->pages = book.pages;
    this->year = book.year;
}

/**
 * @brief 获取出版社信息
 * 
 * @return string 出版社
 */
string Book::getPress(){
    return this->press;
}

/**
 * @brief 获取ISBN
 * 
 * @return string ISBN
 */
string Book::getISBN(){
    return this->ISBN;
}

/**
 * @brief 获取书本页数
 * 
 * @return int 页数
 */
int Book::getPages(){
    return this->pages;
}

/**
 * @brief 获取出品年份
 * 
 * @return int 年份
 */
int Book::getYear(){
    return this->year;
}

/**
 * @brief 输出完整信息
 * 
 */
void Book::output(){
    Publication::output();
    cout<<"出版社："<<this->press<<endl;
    cout<<"ISBN："<<this->ISBN<<endl;
    cout<<"页数："<<this->pages<<endl;
    cout<<"年份："<<this->year<<endl;
}

/**
 * @brief 输入完整信息
 * 
 */
void Book::input(){
    Publication::input();
    cout<<"输入出版社：";cin>>press;
    cout<<"输入ISBN：";cin>>ISBN;
    cout<<"输入页数：";cin>>pages;
    cout<<"输入年份：";cin>>year;
}

/**
 * @brief Destroy the Book:: Book object
 * 
 */
Book::~Book(){

}
