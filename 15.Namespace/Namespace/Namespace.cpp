#include<iostream>

namespace MyNamespace
{
    int a,b,c;
    void fun()
    {
        std::cout<<"a: "<<a<<std::endl;
        std::cout<<"b: "<<b<<std::endl;
        std::cout<<"c: "<<c<<std::endl;
    }
    class Example
    {
    private:
        int x, y;
    public:
        Example(int m, int n)
        {
            x=m; y=n;
        }

        void Show()
        {
            std::cout<<"x: "<<x<<std::endl;
            std::cout<<"y: "<<y<<std::endl;
        }
    };

    namespace Inside
    {
        int k,l;
        void Display()
        {
            std::cout<<"k: "<<k<<std::endl;
            std::cout<<"l: "<<l<<std::endl;
        }
    }
}

int main()
{
    MyNamespace::a=10;
    MyNamespace::b=20;
    MyNamespace::c=30;

    MyNamespace::fun();

    MyNamespace::Example obj(50,60);
    obj.Show();

    MyNamespace::Inside::k=77;
    MyNamespace::Inside::l=88;
    MyNamespace::Inside::Display();

}
