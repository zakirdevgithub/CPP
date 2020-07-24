#include<iostream>

class SubObject
{
private:
    int x, y;
public:
    void setData(int a,int b)
    {
        x=a;
        y=b;
    }

    void getData()
    {
        std::cout<<"x: "<<x<<" y: "<<y<<std::endl;
    }

    SubObject sub(SubObject ob)
    {
        SubObject temp;
        temp.x=x-ob.x;
        temp.y=y-ob.y;
        return temp;
    }
};

int main()
{
    SubObject obj1,obj2,obj3;

    obj1.setData(50,50);
    obj2.setData(10,10);

    obj1.getData();
    obj2.getData();

    obj3=obj1.sub(obj2);
    obj3.getData();

}







