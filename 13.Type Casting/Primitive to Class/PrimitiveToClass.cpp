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
    void showData()
    {
        std::cout<<a<<std::endl;
        std::cout<<b<<std::endl;
    }
};

int main()
{
    Demo obj;
    int x=5;
    obj=x; //Primitive to Class
    obj.showData();
}

