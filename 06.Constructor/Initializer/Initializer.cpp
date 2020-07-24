#include<iostream>

class Numbers
{
private:
    const int a;
    const int b;
    int &x;
    int &y;
public:
    Numbers(int &m, int &n):a(5),b(10),x(m),y(n)
    {

    }

    void getValue()
    {
        std::cout<<"a: "<<a<<std::endl;
        std::cout<<"b: "<<b<<std::endl;
        std::cout<<"x: "<<x<<std::endl;
        std::cout<<"y: "<<y<<std::endl;
    }
};

int main()
{
    int k=50;
    int q=60;
    Numbers num(k,q);
    num.getValue();

}


