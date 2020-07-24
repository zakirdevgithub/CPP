#include<iostream>
#include<fstream>

//tellp function ekta pointer. ja ostream class er member. ja Write mode e use hoy.
//Write korar somoy pointer kon position e ase ta dekha hoy tellp dara

int main()
{
    std::ofstream fout;
    fout.open("Hello.txt", std::ios::app);
    fout<<"Hello C++ Programmer";
    std::cout<<fout.tellp()<<std::endl;
    fout<<"You are great";
    std::cout<<fout.tellp()<<std::endl;
    fout.close();
}
