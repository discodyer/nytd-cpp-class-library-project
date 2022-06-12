#include "Library.h"


using namespace std;

/**
 * @brief Library构造函数
 * 
 */
Library::Library(){
    for(int i=0;i<100;i++){
        pub[i]=NULL;
    }
    ptr=NULL;
    int num=0;
}

/**
 * @brief 按名称搜索
 * 
 * @param name 搜索的名称
 * @return int 返回下标，若没有返回-1
 */
int Library::searchByName(string name){
    for(int i=0;i<100;i++){
        if(pub[i]!=NULL&&(pub[i]->getTitle())==name){
            return i;
        }
    }
    return -1;
}

/**
 * @brief 按编号搜索
 * 
 * @param number 搜索的编号
 * @return int 返回下标，若没有返回-1
 */
int Library::searchByNumber(string number){
    for(int i=0;i<100;i++){
        if(pub[i]!=NULL&&pub[i]->getNumber()==number){
            return i;
        }
    }
    return -1;
}

/**
 * @brief 添加条目
 * 
 */
void Library::add(){
    int opt;
    if((this->findFreeSpace())==99){
        cout<<"\n**列表已满，请删除条目后重试**\n";
        this->start();
        return;
    }
    cout<<"\n请选择您想添加的出版物类型：\n";
    cout<<"[1]图书\n[2]光盘\n[3]图画\n[0]返回\n";
    cin>>opt;
    switch (opt)
    {
    case 1:
        this->input(1);
        break;
    
    case 2:
        this->input(2);
        break;

    case 3:
        this->input(3);
        break;

    case 0:
        this->start();
        break;
    
    default:
        cout<<"\n您的输入有误，请重新输入\n";
        this->add();
        break;
    }
}

void Library::input(int type){
    int f = findFreeSpace();
    if(f==99){
        cout<<"\n列表已满，请删除条目后重试\n";
        this->start();
        return;
    }
    switch (type)
    {
    case 1:
        ptr = new Book;
        ptr->input();
        pub[f]=ptr;
        break;

    case 2:
        ptr = new CD;
        ptr->input();
        pub[f]=ptr;
        break;
    
    case 3:
        ptr = new Picture;
        ptr->input();
        pub[f]=ptr;
        break;
    
    default:
        break;
    }
    this->start();
}

/**
 * @brief 搜索空余位置
 * 
 * @return int 最前的空余位置
 */
int Library::findFreeSpace(){
    for(int i=0;i<100;i++){
        if(pub[i]==NULL){
            return i;
        }
    }
    return 99;
}

void Library::search(){
    int opt;
    string num;
    int p=0;
    string name;
    cout<<"\n请选择搜索模式\n";
    cout<<"[1]按编号搜索\n[2]按名称搜索\n[0]返回\n";
    cin>>opt;
    switch (opt)
    {
    case 1:
        cout<<"\n请输入你想搜索的编号：";
        cin>>num;
        p=searchByNumber(num);
        if(p!=-1){
            pub[p]->output();
        }else{
            cout<<"\n未搜索到对应编号\n";
        }
        break;
    
    case 2:
        cout<<"\n请输入你想搜索的名称：";
        cin>>num;
        p=searchByName(name);
        if(p!=-1){
            pub[p]->output();
        }else{
            cout<<"\n未搜索到对应名称\n";
        }
        break;

    case 0:
        this->start();
        break;

    default:
        break;
    }
    this->start();
}

void Library::list(){
    cout<<"类型\t编号\t标题\t作者\t评级\n";
    for(int i=0;i<100;i++){
        if(pub[i]!=NULL){
            // ptr=pub[i];
            cout<<*pub[i]<<endl;
        }
    }
    this->start();
}

void Library::del(){
    string p;
    int f=0;
    cout<<"\n请输入待删除条目编号:";
    cin>>p;
    f=searchByNumber(p);
    if(f==-1){
        cout<<"\n条目未找到\n";
    }else{
        ptr=pub[f];
        delete ptr;
        ptr=NULL;
        pub[f]=NULL;
        cout<<"\n条目已删除\n";
    }
    this->start();
}

void Library::modify(){
    string p;
    int f=0;
    cout<<"\n请输入待修改条目编号:";
    cin>>p;
    f=searchByNumber(p);
    if(f==-1){
        cout<<"\n条目未找到\n";
        this->start();
        return;
    }else{
        ptr=pub[f];
        ptr->input();
    }
    this->start();
}

Library::~Library(){
    ptr = pub[0];
    for(int i=0;i<100;i++){
        if(&ptr!=NULL){
            delete(ptr);
        }
    }
}

void Library::start(){
    int opt;
    cout<<"\n######图书馆资源管理系统######\n";
    cout<<"[1]增加条目\n";
    cout<<"[2]删除条目\n";
    cout<<"[3]浏览所有条目\n";
    cout<<"[4]查找条目\n";
    cout<<"[5]修改条目\n";
    cout<<"[0]退出\n";
    cout<<"请输入您的选择:";
    cin>>opt;
    switch (opt)
    {
    case 1:
        this->add();
        break;

    case 2:
        this->del();
        break;
    
    case 3:
        this->list();
        break;
    
    case 4:
        this->search();
        break;

    case 5:
        this->modify();
        break;

    case 0:
        cout<<"\n再见！\n";
        exit(0);
        break;
    
    default:
        cout<<"\n输入错误，请重新输入\n";
        this->start();
        break;
    }
}