#include<iostream>

class Overloading
{
private:
    int num1, num2;
public:
    void setData(int x, int y)
    {
        num1=x;
        num2=y;
    }
    void getData()
    {
        std::cout<<"First Number: "<<num1<<std::endl;
        std::cout<<"Second Number: "<<num2<<std::endl;
    }

    Overloading operator +(Overloading obj)
    {
        Overloading temp;
        temp.num1= num1+obj.num1;
        temp.num2= num2+obj.num2;
        return temp;
    }
};

int main()
{
    Overloading obj1,obj2,obj3;
    obj1.setData(10,20);
    obj2.setData(50,60);

    obj1.getData();
    obj2.getData();

    obj3=obj1+obj2;    //obj3=obj1.operator +(obj2);

    obj3.getData();
}


