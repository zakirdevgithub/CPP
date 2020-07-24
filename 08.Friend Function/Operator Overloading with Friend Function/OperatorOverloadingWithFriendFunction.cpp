#include<iostream>

class AddObject
{
private:
    int a,b;
public:
    void setData(int x, int y)
    {
        a=x;
        b=y;
    }
    void getData()
    {
        std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
    }

    friend AddObject operator +(AddObject,AddObject);
};

AddObject operator +(AddObject obj1, AddObject obj2)
{
    AddObject temp;

    temp.a=obj1.a+obj2.a;
    temp.b=obj1.b+obj2.b;
    return temp;
}

int main()
{
    AddObject obj1,obj2,obj3;
    obj1.setData(10,20);
    obj2.setData(40,30);

    obj3=operator+(obj1,obj2);
    obj3.getData();


}
