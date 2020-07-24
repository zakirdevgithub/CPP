#include<iostream>

//Child class , Parent class er protected r public member k access
//korte pare.
class Person
{
private:
    int salary;
protected:
    int age;

public:
    void dataEntry(int s, int a)
    {
        salary=s;
        age=a;
    }

};

//ekhane public holo Visibility_Mode

//1.Public - Parent class er Public,Protected member k nijer class ene Public
//Protected e banabe


//2.Protected- Parent class er Public,Protected member k nijer class ene Protected banabe

//3.Private- Parent class er Public,Protected member k nijer class ene Private banabe

class Student: public Person
{
private:
    int id;
public:
    void setData( int a, int i)
    {
        //salary=s;
        age=a;
        id=i;
    }
    void getData()
    {
        std::cout<<"Age: "<<age<<std::endl;
        std::cout<<"ID: "<<id<<std::endl;
    }

};

class Teacher: public Person
{

public:

    void setData(int a)
    {
        age=a;
    }
    void display()
    {
        //std::cout<<"Salary: "<<salary<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
    }

};

int main()
{
    Student obj;
    obj.setData(25,1);
    obj.getData();

    Teacher obj1;
    obj1.setData(44);
    obj1.display();
}




