//Q1
#include<string>
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

//Q2
class Students{
private:
//student ID as a string
std:: string id;
//first name as a string
std:: string firstname;
//class year as an int
int year;
//major as a string
std:: string major;

public:
//default constructor
Students(){
    id="00000000";
    firstname="Null";
    year=0;
    major="Null";};

    //"get" function to access all private data members
 void get(){
    id;
    firstname;
    year;
    major;
 };

//display function to display all private data members
void display(){
    std:: cout <<"ID:" <<id << std::endl;
    std:: cout <<"First Name:" <<firstname << std::endl;
    std:: cout <<"Year:" << year << std::endl;
    std:: cout <<"Major:" << major << std::endl;
};

//constructor with parameters
Students(std::string ID, std:: string name, int A_year, std::string Degree_m){
    id=ID;
    firstname=name;
    year=A_year;
    major=Degree_m;
};
};