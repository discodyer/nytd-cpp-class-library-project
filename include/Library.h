#ifndef LIBRARY_H_
#define LIBRARY_H_
#include "Publication.h"
#include <iostream>
#include <string>

#define N 100

class Library
{
private:
    Publication *pub[N];
    Publication *ptr;
    int num;//出版物数量
    int searchByName(string name);
    int searchByNumber(string number);
    void input(int type);
    int findFreeSpace();
public:
    Library();
    void start();
    void search();
    void list();
    void del();
    void modify();
    void add();
    ~Library();
};

#endif