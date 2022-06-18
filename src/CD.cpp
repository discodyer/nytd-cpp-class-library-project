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

/**
 * @brief Construct a new CD::CD object
 * 
 */
CD::CD():Publication()
{
    type = "光盘";
    publisher="";
    time="";
    year=0;
}

/**
 * @brief Construct a new CD::CD object
 * 
 * @param num 
 * @param title 
 * @param author 
 * @param rating 
 * @param publisher 
 * @param time 
 * @param year 
 */
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

/**
 * @brief Construct a new CD::CD object
 * 
 * @param cd 
 */
CD::CD(const CD &cd):Publication(cd)
{
    this->publisher = cd.publisher;
    this->time = cd.time;
    this->year = cd.year;
}


/**
 * @brief 获取视频时长
 * 
 * @return string 
 */
string CD::getTime(){
    return this->time;
}

/**
 * @brief 获取出品者
 * 
 * @return string 出品者
 */
string CD::getPublisher(){
    return this->publisher;
}

/**
 * @brief 获取年份
 * 
 * @return int 年份
 */
int CD::getYear(){
    return this->year;
}

/**
 * @brief 输出完整信息
 * 
 */
void CD::output(){
    Publication::output();
    cout<<"出品者："<<this->publisher<<endl;
    cout<<"出品年份："<<this->year<<endl;
    cout<<"视频时长："<<this->time<<endl;
}

/**
 * @brief 输入完整信息
 * 
 */
void CD::input(){
    Publication::input();
    cout<<"输入出品者：";cin>>publisher;
    cout<<"输入出品年份：";cin>>year;
    cout<<"输入视频时长：";cin>>time;
}

/**
 * @brief Destroy the CD::CD object
 * 
 */
CD::~CD(){

}