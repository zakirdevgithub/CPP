#include<iostream>

void add(int*,int*);

int main()
{
    int number1=10, number2=20;
    std::cout<<"Main Method Before Swap"<<std::endl;
    std::cout<<"First Number: "<<number1<<std::endl;
    std::cout<<"Second Number: "<<number2<<std::endl;

    add(&number1,&number2);

    std::cout<<" "<<std::endl;

    std::cout<<"Main Method After Swap"<<std::endl;
    std::cout<<"First Number: "<<number1<<std::endl;
    std::cout<<"Second Number: "<<number2<<std::endl;

    std::cout<<" "<<std::endl;
}

void add(int *num1, int *num2)
{
    std::cout<<" "<<std::endl;

    std::cout<<"Before Swap"<<std::endl;
    std::cout<<"First Number: "<<*num1<<std::endl;
    std::cout<<"Second Number: "<<*num2<<std::endl;

    int temp=*num1;
    *num1=*num2;
    *num2=temp;

    std::cout<<" "<<std::endl;

    std::cout<<"After Swap"<<std::endl;
    std::cout<<"First Number: "<<*num1<<std::endl;
    std::cout<<"Second Number: "<<*num2<<std::endl;

}
