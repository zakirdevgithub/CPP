#include<iostream>
#include<tuple>

int main()
{
    std::tuple <std::string, int, int> student;

    student=std::make_tuple("Zakir",25,1994);

    std::cout<<std::get<0>(student)<<std::endl;
    std::cout<<std::get<1>(student)<<std::endl;
    std::cout<<std::get<2>(student)<<std::endl;

}
