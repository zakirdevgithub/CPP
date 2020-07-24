#include<iostream>

class Shallow
{
private:
    int a,b;
public:
    Shallow()
    {

    }
    Shallow(int x, int y)
    {
        a=x;
        b=y;
    }

    Shallow(Shallow &obj)
    {
        a=obj.a;
        b=obj.b;
    }

    void getData()
    {
        std::cout<<"a: "<<a<<std::endl;
        std::cout<<"b: "<<b<<std::endl;
    }
};

int main()
{
    Shallow obj1(10,20);
    obj1.getData();

    Shallow obj2=obj1;//Copy Constructor
    obj2.getData();

    Shallow obj3;
    obj3=obj1; //Copy Assignment Operator
    obj3.getData();
}




