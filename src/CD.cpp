/**
 * @file CD.cpp
 * @author your name (you@domain.com)
 * @brief CD类实现
 * @version 0.1
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "CD.h"
#include "Publication.h"
#include <iostream>

CD::CD():Publication()
{
    publisher="";
    time="";
    year="";
}

CD::CD(string num,
        string title, 
        string author, 
        string rating, 
        string publisher, 
        string year,
        string time)
            : Publication(num, title, author, rating)
{
    this->publisher = publisher;
    this->year = year;
    this->time = time;
}

CD::CD(const CD &cd):Publication(cd)
{
    // this->number = cd.getNumber();
    // this->title = cd.getTitle();
    // this->author = cd.getAuthor();
    // this->rating = cd.getRating();
    this->publisher = cd.publisher;
    this->time = cd.time;
    this->year = cd.year;
}


string CD::getTime(){
    return this->time;
}

string CD::getPublisher(){
    return this->publisher;
}

string CD::getYear(){
    return this->year;
}

void CD::showInfo(){
    cout<<"*******光盘信息*******"<<endl;
    cout<<"编号："<<this->getNumber()<<endl;
    cout<<"标题："<<this->getTitle()<<endl;
    cout<<"作者："<<this->getAuthor()<<endl;
    cout<<"评级："<<this->getRating()<<endl;
    cout<<"出品者："<<this->publisher<<endl;
    cout<<"出品年份："<<this->year<<endl;
    cout<<"视频时长："<<this->time<<endl;
    cout<<"*********************"<<endl;
}

void CD::Input(){
    cout<<"输入编号：";
    cin>>number;
    cout<<"输入标题：";
    cin>>title;
    cout<<"输入作者：";
    cin>>author;
    this->setRating();
    cout<<"输入出品者：";
    cin>>publisher;
    cout<<"输入出品年份：";
    cin>>year;
    cout<<"输入视频时长：";
    cin>>time;
}