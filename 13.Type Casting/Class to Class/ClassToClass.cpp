#include<iostream>

class Item
{
private:
    int a,b;
public:
    Item() {}
    Item(int x, int y)
    {
        a=x;
        b=y;
    }

    void showData()
    {
        std::cout<<a<<std::endl;
        std::cout<<b<<std::endl;
    }

    int getA()
    {
        return a;
    }

    int getB()
    {
        return b;
    }

};

class Demo
{
private:
    int a,b;
public:

    void showValue()
    {
        std::cout<<a<<std::endl;
        std::cout<<b<<std::endl;
    }
    Demo(){}

    Demo(Item obj)
    {
        a=obj.getA();
        b=obj.getB();
    }


};


int main()
{
    Item it(10,20);
    it.showData();

    Demo d;
    d=it; // Class to Class
    d.showValue();
}
