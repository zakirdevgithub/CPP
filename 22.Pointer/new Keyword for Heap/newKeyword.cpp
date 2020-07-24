#include <iostream>

int main()
{

    int number=10;

    int *pNum=new int; //Forr allocate memory on heap
    pNum=&number;
    std::cout<<number<<" "<<*pNum<<std::endl;

    delete pNum;

    pNum=nullptr;  //here nullptr instead of a address
    delete pNum; //For Harm free
}
