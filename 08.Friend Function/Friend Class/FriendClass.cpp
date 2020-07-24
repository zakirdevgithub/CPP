#include<iostream>

class A
{

public:
    int x,y;
    void func1(A){}
    void func2(A){}
};

class B
{
    //friend void A::func1(A);
    //friend void A::func2(A);
    //OR
    friend class A; //for All function

};

void func1(A obj)
{
    obj.x=10;
    std::cout<<obj.x<<std::endl;
}

void func2(A obj)
{
    obj.y=20;
    std::cout<<obj.y<<std::endl;
}

int main()
{
   A obj1;
   func1(obj1);
   func2(obj1);
}



