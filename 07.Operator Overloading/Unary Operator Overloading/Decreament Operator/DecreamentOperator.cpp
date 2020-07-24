#include<iostream>

class Decreament
{
private:
    int x;
public:
    void setData(int a)
    {
        x=a;
    }

    void getData()
    {
        std::cout<<"X: "<<x<<std::endl;
    }

    Decreament operator --() // Method for Pre-Decreament
    {
        Decreament temp;
        temp.x=--x;
        return temp;
    }


    Decreament operator --(int) // Method for Post-Decreament
    {
        Decreament temp;
        temp.x=x--;
        return temp;
    }

};

int main()
{
    Decreament obj1,obj2,obj3;
    obj1.setData(10);

    std::cout<<"--Pre-Decreament--"<<std::endl;
    obj2=obj1.operator --();
    obj1.getData();
    obj2.getData();

    std::cout<<"Post-Decreament"<<std::endl;
    obj3=obj1.operator --(2); //ekhane 2 er jaigay j kono integer value deya jabe
    obj1.getData();
    obj3.getData();



}
