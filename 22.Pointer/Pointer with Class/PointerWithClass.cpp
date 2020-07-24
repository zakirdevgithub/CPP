#include <iostream>

class Person
{
private:
    std::string name;
    int age;
    double height;
public:
    Person(std::string name, int age, double height);
    ~Person();
    void show();
};

Person :: Person(std::string name, int age, double height)
{
    this->name=name;
    this->age=age;
    this->height=height;
}

void Person::show()
{
    std::cout<<"Name: "<<this->name<<std::endl;
    std::cout<<"Age: "<<this->age<<std::endl;
    std::cout<<"Height: "<<this->height<<std::endl;
}

int main()
{
    Person *pObj=new Person("Zakir Hossain",25,5.7);

    pObj->show();
    //OR
    (*pObj).show();
}






