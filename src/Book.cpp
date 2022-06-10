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
#include "Publication.h"
#include <iostream>

Book::Book():Publication()
{
    press = ""; // 出版社
    ISBN = ""; // ISBN
    pages = ""; // 页数
    year = ""; // 年份
}

Book::Book(string num, 
            string title, 
            string author, 
            string rating, 
            string press, 
            string ISBN, 
            string pages, 
            string year)
            : Publication(num, title, author, rating)
{
    this->press = press;
    this->ISBN = ISBN;
    this->pages = pages;
    this->year = year;
}

Book::Book(const Book &book):Publication(book)
{
    this->press = book.press;
    this->ISBN = book.ISBN;
    this->pages = book.pages;
    this->year = book.year;
}


string Book::getPress(){
    return this->press;
}

string Book::getISBN(){
    return this->ISBN;
}

string Book::getPages(){
    return this->pages;
}

string Book::getYear(){
    return this->year;
}

void Book::showInfo(){
    cout<<"*******图书信息*******"<<endl;
    cout<<"编号："<<this->getNumber()<<endl;
    cout<<"标题："<<this->getTitle()<<endl;
    cout<<"作者："<<this->getAuthor()<<endl;
    cout<<"评级："<<this->getRating()<<endl;
    cout<<"出版社："<<this->press<<endl;
    cout<<"ISBN："<<this->ISBN<<endl;
    cout<<"页数："<<this->pages<<endl;
    cout<<"年份："<<this->year<<endl;
    cout<<"**********************"<<endl;
}

void Book::Input(){
    cout<<"输入编号：";
    cin>>number;
    cout<<"输入标题：";
    cin>>title;
    cout<<"输入作者：";
    cin>>author;
    this->setRating();
    cout<<"输入出版社：";
    cin>>press;
    cout<<"输入ISBN：";
    cin>>ISBN;
    cout<<"输入页数：";
    cin>>pages;
    cout<<"输入年份：";
    cin>>year;
}