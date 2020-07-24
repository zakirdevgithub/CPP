#include <iostream>

int main()
{
    int number=10;
    int *pNumber=&number;
    std::cout<<"Variable: "<<number<<std::endl;
    std::cout<<"Address: "<<&number<<std::endl;
    std::cout<<"Address with pointer: "<<pNumber<<std::endl;
    std::cout<<"Pointer Value: "<<*pNumber<<std::endl;

    *pNumber=20;
    std::cout<<"After change pNumber"<<std::endl;
    std::cout<<"Variable: "<<number<<std::endl;


}
