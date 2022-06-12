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


CD::CD():Publication()
{
    type = "光盘";
    publisher="";
    time="";
    year=0;
}

CD::CD(string num,
        string title, 
        string author, 
        string rating, 
        string publisher, 
        string time,
        int year)
            : Publication(num, title, author, rating)
{
    this->publisher = publisher;
    this->year = year;
    this->time = time;
}

CD::CD(const CD &cd):Publication(cd)
{
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

int CD::getYear(){
    return this->year;
}

void CD::output(){
    Publication::output();
    cout<<"出品者："<<this->publisher<<endl;
    cout<<"出品年份："<<this->year<<endl;
    cout<<"视频时长："<<this->time<<endl;
}

void CD::input(){
    Publication::input();
    cout<<"输入出品者：";cin>>publisher;
    cout<<"输入出品年份：";cin>>year;
    cout<<"输入视频时长：";cin>>time;
}

CD::~CD(){

}