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
    cout<<"";
}

void Publication::Input(){
    
}