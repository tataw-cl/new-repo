#include<iostream>
using namespace std;
class point
{
private:
    int x,y;
public:
    point();
    bool move(int,int);
    void print();
};

point::point(/* args */)
{
    cout <<"Constructor is called..." <<endl;
    x=0;
    y=0;
}

int main(){
    point p1,p2;
    point *pp=new point;
}
