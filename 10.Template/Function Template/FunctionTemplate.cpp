#include<iostream>

template <class X> void big(X a, X b)
{
    if(a>b)
        std::cout<<a<< " is greater than "<<b<<std::endl;
    else
        std::cout<<b<<" is greater than "<<a<<std::endl;
}

int main()
{
    big(10,20);
    big(30,20);
    big(5.7,3.5);
    big("Zakir","Zahid");
}
