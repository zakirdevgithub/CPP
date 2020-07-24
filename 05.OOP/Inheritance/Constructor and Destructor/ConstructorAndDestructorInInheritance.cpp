#include<iostream>

class A
{
private:
    int a;
public:
    A(int m)
    {
       a=m;
       std::cout<<"From constructor A and value: "<<a<<std::endl;
    }

    ~A()
    {
        std::cout<<"A Destructor"<<std::endl;
    }

};

class B: public A
{
private:
    int b;
public:
    B(int x,int y):A(x) // Call hobe Age B but execute hobe age A
    {
        b=y;
        std::cout<<"From constructor B and value: "<<b<<std::endl;
    }
    ~B() // Call hobe age B and execute o hobe age B
    {
        std::cout<<"B Destructor"<<std::endl;
    }

};

int main()
{
    B obj(2,3);
}





