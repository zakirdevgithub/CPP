#include<iostream>

//Constructor object k object banay. mane object tokhon e soyongsompuno hoy jkn object e value assign
//kora hoy. j kaj ta constructor kore
//2 ta constructor default
//1.Default Constructor
//2.Copy Constructor
class Person
{
private:
    std::string name;
    int age;
    double height;
public:
    Person(std::string n, int a, double h)
    {
        name=n;
        age=a;
        height=h;
    }
    void display()
    {
        std::cout<<name<<" "<<age<<" "<<height<<std::endl;

    }
};

int main()
{
    Person obj("Zakir Hossain",25,5.7); // Evabe Constructor e value dite hobe
    Person obj2=Person("Zahid Hasan",25,5.9);// Evabe o kora jay
    obj.display();
    obj2.display();

}





