#include<iostream>

class Demo
{
private:
    int a,b;
public:
    Demo(){}
    Demo(int k)
    {
        a=k;
        b=0;
    }

    operator int()
    {
        return a;
    }

};

int main()
{
    Demo obj(10);
    int x;
    x=obj; //Class to Primitive
    std::cout<<x;
}

