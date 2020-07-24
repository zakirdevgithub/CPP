#include<iostream>

int func(int,int=10,int=20);

int main()
{
    int a,b,c;
    std::cout<<"Enter One Number: "<<std::endl;
    std::cin>>a;
    std::cout<<"First Number: "<<func(a)<<std::endl;

    std::cout<<"Enter Two Number: "<<std::endl;
    std::cin>>a>>b;
    std::cout<<"Sum of Two Number: "<<func(a,b)<<std::endl;

    std::cout<<"Enter Three Number: "<<std::endl;
    std::cin>>a>>b>>c;
    std::cout<<"Sum of Three Number: "<<func(a,b,c)<<std::endl;


}

int func(int x,int y,int z)
{
    return x+y+z;
}
