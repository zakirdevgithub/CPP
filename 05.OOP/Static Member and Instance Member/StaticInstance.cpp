#include<iostream>

//static variable jotokhon na program ses hobe totokhon thakbe
class Person
{
private:
    int age; // instance member variable
    static float height; // static/class member variable
public:
    void setAge(int a) // instance member variable
    {
        age=a;
    }

    static void setHeight(float h) // static/class member variable
    {
        height=h;
    }

    void getAge() // instance member variable
    {

        std::cout<<"Age is: "<<age<<std::endl;
    }

    static void getHeight() // static/class member variable
    {
        std::cout<<"Height is: "<<height<<std::endl;
    }

};

float Person::height; // ekhane height k declare korte hobe chaile value  o diye dite partam

int main()
{
    Person obj;
    obj.setAge(10);
    obj.getAge();

    Person::setHeight(5.6);
    Person::getHeight();


}

