#include<iostream>
using namespace std;

class Quad{
 protected:
    float side1, side2, side3, side4;
    public:
    virtual float Area() const=0;


    void setter(float s1, float s2, float s3, float s4){
side1=s1;
side2=s2;
side3=s3;
side4=s4;
    };
    
};

class Rectangle: public Quad{
    float Area() const override {
        return side1*side2;
    }
};

float GetQuad(const Quad& quad){
    return quad.Area();
}

//Q3
class Population{
    private:
    int Numborn=0;
    int Numliving=0;

    public:
    Population(){
        Numborn++;
        Numliving++;
    }

    ~Population(){
        Numliving--;
    }
};