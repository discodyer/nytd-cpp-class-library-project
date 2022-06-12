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
    type = "出版物";
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

void Publication::output(){
    cout<<"\n*********出版物信息*********\n";
    cout<<"编号："<<this->number<<endl;
    cout<<"标题："<<this->title<<endl;
    cout<<"作者："<<this->author<<endl;
    cout<<"评级："<<this->rating<<endl;
}

void Publication::input(){
    cout<<"\n**********录入信息**********\n";
    cout<<"输入编号：";cin>>number;
    cout<<"输入标题：";cin>>title;
    cout<<"输入作者：";cin>>author;
    this->setRating();//输入评级
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

Publication::~Publication(){

}

ostream &operator << (ostream &out , const Publication &pub){
    out<<pub.type<<'\t';
    out<<pub.number<<'\t';
    out<<pub.title<<'\t';
    out<<pub.author<<'\t';
    out<<pub.rating<<'\t';
    return out;
}

bool Publication::operator==(string number){
    return this->number==number;
}