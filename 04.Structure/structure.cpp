#include<iostream>

struct Book
{
private:
    int id;
    std::string name;
    float price;
public:
    void input()
    {
        std::cout<<"Enter Book ID: "<<std::endl;
        std::cin>>id;
        std::cout<<"Enter Book Name: "<<std::endl;
        std::cin.ignore();// Use korte hobe tasara porer line chole ashbe
        getline(std::cin, name);
        std::cout<<"Enter Price: "<<std::endl;
        std::cin>>price;

    }
    void display()
    {
        std::cout<<"---Details---"<<std::endl;
        std::cout<<"ID: "<<id<<std::endl;
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Price: "<<price<<std::endl;
    }
};

int main()
{
    Book book;
    book.input();
    book.display();
}
