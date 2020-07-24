#include<iostream>

class AddObject
{
private:
    int x,y;
public:
    void setValue(int a, int b)
    {
        x=a;
        y=b;
    }
    void getValue()
    {
        std::cout<<"x: "<<x<<" y: "<<y;
    }

    AddObject add(AddObject ob)
    {
        AddObject tempObj;
        tempObj.x=x+ob.x;
        tempObj.y=y+ob.y;

        return tempObj;
    }

};


int main()
{

    AddObject obj1,obj2,obj3;
    obj1.setValue(5,6);
    obj2.setValue(10,9);

    obj3=obj1.add(obj2);

    std::cout<<"--obj1--"<<std::endl;
    obj1.getValue();

    std::cout<<std::endl;

    std::cout<<"--obj2--"<<std::endl;
    obj2.getValue();
    std::cout<<std::endl;

    std::cout<<"--obj3--"<<std::endl;
    obj3.getValue();

}
