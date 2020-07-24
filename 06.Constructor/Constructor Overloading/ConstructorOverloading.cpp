#include<iostream>

class Student
{
private:
    std::string name;
    int age;
    double height;
public:
    Student() //Default Constructor
    {
        std::cout<<"This is Default Constructor"<<std::endl;
    }
    Student(std::string n)
    {
        name=n;

    }
    Student(std::string n, int a)
    {
        name=n;
        age=a;
    }
    Student(std::string n, int a, double h)
    {

        name=n;
        age=a;
        height=h;
    }
    void display1()
    {
        std::cout<<"Name: "<<name<<std::endl;
    }
    void display2()
    {
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
    }
    void display3()
    {
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
        std::cout<<"Height: "<<height<<std::endl;
    }
};


int main()
{
    Student obj1; //Eta default constructor k call korbe
    Student obj2("Zakir Hossain");
    obj2.display1();
    Student obj3("Programmer",10);
    obj3.display2();
    Student obj4("C++ Programmer",25,5.7);
    obj4.display3();
}
