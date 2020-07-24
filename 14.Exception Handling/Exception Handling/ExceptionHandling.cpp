#include<iostream>

int main()
{
    int a=5,b=0;

    try
    {
        if(b==0)
            throw "Invalid";
        else{
        int c=a/b;
        std::cout<<c<<std::endl;
        }

    }
    catch( int ex)
    {
        std::cout<<ex<<std::endl;
    }
    catch(...)
    {
        std::cout<<"Divided By Zero Is Not Valid"<<std::endl;
    }
}
