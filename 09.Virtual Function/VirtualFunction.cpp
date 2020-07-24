#include<iostream>

class A
{

   // *_vptr;
public:
    void fun1()
    {
        std::cout<<"From class A fun1"<<std::endl;
    }
   virtual void fun2()
    {
        std::cout<<"From class A fun2"<<std::endl;
    }
    virtual void fun3()
    {
        std::cout<<"From class A fun3"<<std::endl;
    }
};

class B: public A
{
public:
    void fun1()
    {
        std::cout<<"From class B fun1"<<std::endl;
    }
    void fun2()
    {
        std::cout<<"From class B fun2"<<std::endl;
    }
    void fun3()
    {
        std::cout<<"From class B fun3"<<std::endl;
    }
};

int main()
{
    A *p, obj;
    B obj2;
    //p=&obj;
    p=&obj2;


    p->fun1(); //Early Bind tai A class kei call korbe
    p->fun2(); //Late Binding tai Run Time e call hobe
    // and Type na dekhe kon class er object er address assign kora
    //ase ta dekhbe and se hisebei call korbe
    p->fun3();
}
