#include<iostream>

class Computer
{
private:
    std::string brand;
    std::string model;
    int ram;
    float price;
    int *point;

public:
    Computer(std::string n, std::string m, int r, float p )
    {

        brand=n;
        model=m;
        ram=r;
        price=p;
    }


    ~Computer() //Destructor
    {

    }

    void display()
    {
        std::cout<<"Brand: "<<brand<<std::endl;
        std::cout<<"Model: "<<model<<std::endl;
        std::cout<<"Ram: "<<ram<<std::endl;
        std::cout<<"Price: "<<price<<std::endl;

    }
};

int main()
{
    Computer *obj= new Computer("hp","G3",8,54000.50);
    // Heap e memory allocate korar jonno new use korlam

   // (*obj).display();
   //OR
   obj -> display();
   delete obj;
}



