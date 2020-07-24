#include<iostream>

class Person
{
private:
    int x,y;
public:
    Person()
    {

    }
    Person(int a, int b)
    {
        x=a; y=b;
    }

    void Show()
    {
        std::cout<<"x: "<<x<<" y: "<<y<<std::endl;
    }

    class Student
    {
    private:
        std::string name;
        int age;
    public:
        Student()
        {

        }
        Student(std::string n, int a)
        {
            name=n;
            age=a;
        }

        void Display()
        {
            std::cout<<"Name: "<<name<<std::endl;
            std::cout<<"Age: "<<age<<std::endl;
        }
    };
};

int main()
{
    Person obj, obj1(10,20);
    obj1.Show();

    Person::Student st,st1("Zakir",25);
    st1.Display();
}
