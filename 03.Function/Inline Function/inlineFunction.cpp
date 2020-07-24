#include<iostream>

inline void func();
int main()
{
    std::cout<<"Inline Function use kora hoy"<<std::endl;
    std::cout<<" small size er function er jonno"<<std::endl;
    std::cout<<"Aro details amar mathar vitor set hoiye gase"<<std::endl;
    func();
}

void func()
{
    std::cout<<"I am Small Function. Make me Inline to save Time"<<std::endl;
}
