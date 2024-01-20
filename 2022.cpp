//Q1
#include<cstring>
#include<iostream>
class Departments
{
private:
    char title[12];
    int code;
public:
void init(char title[], int){
title ="UB";
int code=000;
};
void display(){
std::cout << "title: " << title << std::endl;
std::cout <<"course code:" << code << " ";
};
Departments(char initTitle[],int initCode){
    strncpy(title, initTitle, sizeof(title)-1);
    title[sizeof(title)-1]='\0';
    code=initCode;
    }
};

int main(){
    Departments d1("CSC", 305);
    d1.display();
    return 0;
}