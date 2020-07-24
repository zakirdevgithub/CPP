#include<iostream>

class MinusOperator
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

    MinusOperator operator -()
    {
        MinusOperator tempObj;
        tempObj.x=-x;
        return tempObj;
    }

};



int main()
{
    MinusOperator obj1,obj2;
    obj1.setData(10);
    obj1.getData();

    obj2=-obj1;            //obj2=obj1.operator -();
    obj2.getData();
}



