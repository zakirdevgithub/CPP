#include<iostream>

class AddObject
{
private:
    int a, b;
public:
    void setValue(int x, int y)
    {
        a=x;
        b=y;
    }
    void getValue()
    {
        std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
    }

    AddObject add(AddObject obj1, AddObject obj2)
    {
        AddObject tempObj;
        tempObj.a=obj1.a+obj2.a;
        tempObj.b=obj1.b+obj2.b;

        return tempObj;
    }
};


int main()
{
    AddObject obj1,obj2,obj3,obj4;
    obj1.setValue(5,6);
    obj2.setValue(10,20);
    obj1.getValue();
    obj2.getValue();

    obj4=obj3.add(obj1,obj2);

    obj4.getValue();


}
