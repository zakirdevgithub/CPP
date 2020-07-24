#include <iostream>

class Person
{
private:
    int age;
    float height;
public:
    void display();
    friend void func(Person&,int,float);
};

void func(Person &obj,int a,float h) //Ekhane reference variable lagailam karon original object use
                                    //use kortesi tai
{
    obj.age=a;
    obj.height=h;
}

void Person:: display()
{

    std::cout<<"Age: "<<age<<" Height: "<<height<<std::endl;
}

int main()
{
    Person pr;
    func(pr,10,20.0);
    pr.display();

}






