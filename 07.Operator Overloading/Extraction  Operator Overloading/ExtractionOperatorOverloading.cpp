#include<iostream>

class Extraction
{
private:
    int a,b;

public:
    void getData()
    {
        std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
    }

    friend std::istream& operator>>(std::istream&, Extraction&);
    friend std::ostream& operator <<(std::ostream&, Extraction);
};

std::istream& operator>>(std::istream &din, Extraction &obj)
{
    din>>obj.a>>obj.b;
}

std::ostream& operator<<(std::ostream &dout, Extraction obj)
{
    dout<<obj.a<<obj.b;
}

int main()
{
    Extraction ex;
    std::cout<<"Enter Two Numbers: "<<std::endl;
    std::cin>>ex;
    std::cout<<ex<<std::endl;
}






