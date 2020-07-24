#include<iostream>

class Increament
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

    Increament operator ++() // Method for Pre-Increament
    {
        Increament temp;
        temp.x=++x;
        return temp;
    }


    Increament operator ++(int) // Method for Post-Increament
    {
        Increament temp;
        temp.x=x++;
        return temp;
    }

};

int main()
{
    Increament obj1,obj2,obj3;
    obj1.setData(10);

    std::cout<<"--Pre-Increament--"<<std::endl;
    obj2=obj1.operator ++();
    obj1.getData();
    obj2.getData();

    std::cout<<"Post-Increament"<<std::endl;
    obj3=obj1.operator ++(2); //ekhane 2 er jaigay j kono integer value deya jabe
    obj1.getData();
    obj3.getData();



}
