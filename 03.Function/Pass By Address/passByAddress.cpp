#include<iostream>

//Function Declaration/Prototype
int sum(int*,int*);
int main()
{
    int x=10,y=20;
     //Function Call(Call na korle sum function er variable Memory pabe na)
    int result=sum(&x,&y); //Actual Argument

    std::cout<<"Result of Sum: "<<result<<std::endl;
    std::cout<<"X: "<<x<<" Y: "<<y<<std::endl;
}

//Function Definition
int sum(int *a, int *b) //Formal Argument
{
    *a=50;
    *b=60;
    return (*a+*b);
}
