#include<iostream>

class Deep
{
private:
    int a,b, *p;
public:
    Deep()
    {

    }
    Deep(int x, int y, int z)
    {
        a=x;
        b=y;
        p=new int;
        *p=z;
    }
    Deep(Deep &obj)
    {
        a=obj.a;
        b=obj.b;
        p=new int;
        *p=*(obj.p);
    }
    ~Deep()
    {
        delete p;
    }
    void showData()
    {
        std::cout<<"a: "<<a<<std::endl;
        std::cout<<"b: "<<b<<std::endl;
        std::cout<<"*p: "<<*p<<std::endl;
    }
};

int main()
{
    Deep obj1(10,20,30);
    obj1.showData();

    Deep obj2=obj1;//Copy Constructor

    obj2.showData();

    Deep obj3;
    obj3=obj1;// Copy Assignment Operator
    obj3.showData();

}




