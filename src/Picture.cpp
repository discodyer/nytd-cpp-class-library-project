/**
 * @file Picture.cpp
 * @author your name (you@domain.com)
 * @brief Picture类实现
 * @version 0.1
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Picture.h"
#include "Publication.h"
#include <iostream>

Picture::Picture():Publication()
{
    nation = ""; // 国籍
    size = ""; // 大小
}

Picture::Picture(string num, 
            string title, 
            string author, 
            string rating, 
            string nation,
            string size)
            : Publication(num, title, author, rating)
{
    this->nation = nation;
    this->size = size;
}

Picture::Picture(const Picture &pic):Publication(pic)
{
    this->nation = pic.nation;
    this->size = pic.size;
}


string Picture::getNation(){
    return this->nation;
}

string Picture::getSize(){
    return this->size;
}

void Picture::showInfo(){
    cout<<"*******图画信息*******"<<endl;
    cout<<"编号："<<this->getNumber()<<endl;
    cout<<"标题："<<this->getTitle()<<endl;
    cout<<"作者："<<this->getAuthor()<<endl;
    cout<<"评级："<<this->getRating()<<endl;
    cout<<"出品国籍："<<this->nation<<endl;
    cout<<"作品尺寸："<<this->size<<endl;
    cout<<"**********************"<<endl;
}

void Picture::Input(){
    cout<<"输入编号：";
    cin>>number;
    cout<<"输入标题：";
    cin>>title;
    cout<<"输入作者：";
    cin>>author;
    this->setRating();
    cout<<"输入出品国籍：";
    cin>>nation;
    cout<<"输入作品尺寸：";
    cin>>size;
}