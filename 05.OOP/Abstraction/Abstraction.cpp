#include<iostream>

//jodi kono class e Pure Virtual Function thake tahole sei class k
// Abstract class bole
//Abstract class er object banano jay na

class Person
{
public:
    virtual void eat()=0; //Pure Virtual Function
};

class Student:public Person
{
public:
    void eat()
    {
        std::cout<<"Student Can Eat"<<std::endl;
    }
};

int main()
{
    //Person obj; //Error because Person is a Abstract Class
    Student obj;
    obj.eat();
}
