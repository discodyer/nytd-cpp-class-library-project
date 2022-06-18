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

/**
 * @brief Construct a new Picture:: Picture object
 * 
 */
Picture::Picture():Publication()
{
    type = "图画";
    nation = ""; // 国籍
    size = ""; // 大小
}

/**
 * @brief Construct a new Picture:: Picture object
 * 
 * @param num 
 * @param title 
 * @param author 
 * @param rating 
 * @param nation 
 * @param size 
 */
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

/**
 * @brief Construct a new Picture:: Picture object
 * 
 * @param pic 
 */
Picture::Picture(const Picture &pic):Publication(pic)
{
    this->nation = pic.nation;
    this->size = pic.size;
}

/**
 * @brief 获取国籍
 * 
 * @return string 国籍
 */
string Picture::getNation(){
    return this->nation;
}

/**
 * @brief 获取作品尺寸
 * 
 * @return string 作品尺寸
 */
string Picture::getSize(){
    return this->size;
}

/**
 * @brief 输出完整信息
 * 
 */
void Picture::output(){
    Publication::output();
    cout<<"出品国籍："<<this->nation<<endl;
    cout<<"作品尺寸："<<this->size<<endl;
}

/**
 * @brief 输入完整信息
 * 
 */
void Picture::input(){
    Publication::input();
    cout<<"输入出品国籍：";cin>>nation;
    cout<<"输入作品尺寸：";cin>>size;
}

/**
 * @brief Destroy the Picture:: Picture object
 * 
 */
Picture::~Picture(){

}