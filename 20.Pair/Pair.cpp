#include<iostream>


class Person
{
private:
    int x,y;
public:
    Person()
    {

    }
    Person(int a,int b)
    {
        x=a; y=b;
    }
    void show()
    {
        std::cout<<"x: "<<x<<std::endl;
        std::cout<<"y: "<<y<<std::endl;
    }
};

int main()
{
    Person obj(10,20);
    std::pair <std::string,std::string> country;
    std::pair<std::string,int> student;
    std::pair<int,Person> employee;

    country=std::make_pair("Bangladesh","Dhaka");
    student=std::make_pair("Zakir Hossain",25);
    employee=std::make_pair(1,obj);

    std::cout<<country.first<<":"<<country.second<<std::endl;
    std::cout<<student.first<<":"<<student.second<<std::endl;

    obj=employee.second;

    std::cout<<employee.first;
    obj.show();






}
