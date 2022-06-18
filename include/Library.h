/**
 * @file Library.h
 * @brief Library 图书管理系统类声明
 * 
 */

#ifndef LIBRARY_H_
#define LIBRARY_H_
#include "Publication.h"
#include <iostream>
#include <string>
#include "Book.h"
#include "CD.h"
#include "Picture.h"
#include <stdlib.h>

#define N 100 // 出版物数组大小

/**
 * @brief Library 图书管理系统类
 * 
 */
class Library
{
private:
    Publication *pub[N]; // 创建一个基类指针数组
    Publication *ptr; // 创建一个指向基类的指针
    int num; // 出版物数量
    int searchByName(string name); // 按名称搜索
    int searchByNumber(string number); // 按编号搜索
    void input(int type); // 输入操作
    int findFreeSpace(); // 获取数组中下标最小的空指针
public:
    Library(); // 构造函数
    void start(); // 开始菜单
    void search(); // 搜索
    void list(); // 浏览所有条目
    void del(); // 删除某个条目
    void modify(); // 修改某个条目
    void add(); // 添加一个条目
    ~Library(); // 析构函数
};

#endif