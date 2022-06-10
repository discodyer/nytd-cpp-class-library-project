/**
 * @file Publication.cpp
 * @author your name (you@domain.com)
 * @brief Publication类实现文件
 * @version 0.1
 * @date 2022-06-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "Publication.h"

Publication::Publication()
{
    number = "";
    title = "";
    author = "";
    rating = "";
}

Publication::Publication(string num, 
                        string title, 
                        string author, 
                        string rating):
                        number(num)
{
    this->number = num;
    this->title = title;
    this->author = author;
    this->rating = rating;
}

Publication::Publication(const Publication &pub){
    number = pub.number;
    title = pub.title;
    author = pub.author;
    rating = pub.rating;
}

string Publication::getNumber(){
    return number;
}

string Publication::getTitle(){
    return title;
}

string Publication::getAuthor(){
    return author;
}

string Publication::getRating(){
    return rating;
}

void Publication::showInfo(){
    cout<<"*******出版物信息*******"<<endl;
    cout<<"编号："<<this->number<<endl;
    cout<<"标题："<<this->title<<endl;
    cout<<"作者："<<this->author<<endl;
    cout<<"评级："<<this->rating<<endl;
    cout<<"**********************"<<endl;
}

void Publication::Input(){
    cout<<"输入编号：";
    cin>>number;
    cout<<"输入标题：";
    cin>>title;
    cout<<"输入作者：";
    cin>>author;
    this->setRating();
}

void Publication::setRating(){
    string ra;
    cout<<"输入评级([1]一般;[2]儿童;[3]成人;[其他]):";
    cin>>ra;
    if(ra == "1")
    {
        this->rating="一般";
    }else if (ra == "2")
    {
        this->rating="儿童";
    }else if (ra == "3")
    {
        this->rating="成人";
    }else{
        this->rating=ra;
    }   
}