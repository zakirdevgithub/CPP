#include<iostream>


//Method overloading hoy ek e class e

class A
{
private:
    int a,b;
public:
    void fun1()
    {
        std::cout<<"fun1 from Class A"<<std::endl;
    }

    void fun2()
    {
        std::cout<<"fun2 from Class A"<<std::endl;
    }


};

class B:public A
{
private:
int a,b;
public:
    void fun1() //Method Overriding
    {
        std::cout<<"fun1 from Class B"<<std::endl;
    }

        void fun2(int x) //Method Hiding
    {
        std::cout<<"Value: "<<x<<std::endl;
    }

    void fun2(int x, int y) //Method Overloading
    {
        std::cout<<"x: "<<x<<" y: "<<y<<std::endl;
    }
};

int main()
{
    B obj;
    obj.fun1();
    //obj.fun2(); //Error karon method hiding
    obj.fun2(10);
    obj.fun2(10,20);
}




