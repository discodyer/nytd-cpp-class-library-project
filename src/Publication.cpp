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

#include "Publication.h"

/**
 * @brief Construct a new Publication:: Publication object
 * 
 */
Publication::Publication()
{
    number = "";
    title = "";
    author = "";
    rating = "";
    type = "出版物";
}

/**
 * @brief Construct a new Publication:: Publication object
 * 
 * @param num 
 * @param title 
 * @param author 
 * @param rating 
 */
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

/**
 * @brief Construct a new Publication:: Publication object
 * 
 * @param pub 
 */
Publication::Publication(const Publication &pub){
    number = pub.number;
    title = pub.title;
    author = pub.author;
    rating = pub.rating;
}

/**
 * @brief 获取作品编号
 * 
 * @return string 编号
 */
string Publication::getNumber(){
    return number;
}

/**
 * @brief 获取作品标题
 * 
 * @return string 标题
 */
string Publication::getTitle(){
    return title;
}

/**
 * @brief 获取作品作者
 * 
 * @return string 作者
 */
string Publication::getAuthor(){
    return author;
}

/**
 * @brief 获取作品评级
 * 
 * @return string 评级
 */
string Publication::getRating(){
    return rating;
}

/**
 * @brief 输出完整信息
 * 
 */
void Publication::output(){
    cout<<"\n*********出版物信息*********\n";
    cout<<"编号："<<this->number<<endl;
    cout<<"标题："<<this->title<<endl;
    cout<<"作者："<<this->author<<endl;
    cout<<"评级："<<this->rating<<endl;
}

/**
 * @brief 输入完整信息
 * 
 */
void Publication::input(){
    cout<<"\n**********录入信息**********\n";
    cout<<"输入编号：";cin>>number;
    cout<<"输入标题：";cin>>title;
    cout<<"输入作者：";cin>>author;
    this->setRating();//输入评级
}

/**
 * @brief 设置评级
 * 
 */
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

/**
 * @brief Destroy the Publication:: Publication object
 * 
 */
Publication::~Publication(){

}

/**
 * @brief 重载<<运算符，输出一部分信息
 * 
 * @param out 
 * @param pub 
 * @return ostream& 
 */
ostream &operator << (ostream &out , const Publication &pub){
    out<<pub.type<<'\t';
    out<<pub.number<<'\t';
    out<<pub.title<<'\t';
    out<<pub.author<<'\t';
    out<<pub.rating<<'\t';
    return out;
}

/**
 * @brief 重载==运算符，比较编号
 * 
 * @param number 
 * @return true 
 * @return false 
 */
bool Publication::operator==(string number){
    return this->number==number;
}