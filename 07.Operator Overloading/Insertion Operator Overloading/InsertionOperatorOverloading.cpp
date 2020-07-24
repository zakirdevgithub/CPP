#include<iostream>

class Insertion
{
private:
    int a;
    int b;

public:

    void getData()
    {
        std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
    }

    friend std::istream& operator>>(std::istream&,Insertion&);
};

std::istream& operator>>(std::istream &din, Insertion &obj)
{
    //std::cin>>obj.a>>obj.b;
    //OR
    din>>obj.a>>obj.b;
}



int main()
{
    Insertion obj1;

    //operator>>(std::cin,obj1);
    std::cout<<"Enter Two Number"<<std::endl;
    std::cin>>obj1;
    obj1.getData();
}






