#include<iostream>

class Person
{
private:
    int age;
    float height;
public:
    Person(int a, float h)
    {
        age=a;
        height=h;
    }

    Person(Person &obj)//Copy Constructor
    {
        age=obj.age;
        height=obj.height;
    }
    void display()
    {
        std::cout<<"Age: "<<age<<std::endl;
        std::cout<<"height: "<<height<<std::endl;
    }
};

int main()
{

    Person obj1(25,5.7);
    obj1.display();

    //Person obj2=obj1;
    //Same
    Person obj2(obj1);
    obj2.display();

}

