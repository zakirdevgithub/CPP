#include<iostream>

class Nokia
{
private:
    int x,y, *ptn;
public:

    Nokia()
    {

    }

    Nokia(int a, int b, int c)
    {
        x=a; y=b;
        ptn=new int;
        *ptn=c;
    }
    void Show()
    {
        std::cout<<"x: "<<x<<" y: "<<y<<std::endl;
    }

    virtual ~Nokia() // Bole dilam Late Binding hobe. jeno Object delete korar somoy Type na dekhe
    // Address dakhe
    {
        delete ptn;
    }


};

class Walton: public Nokia
{
private:
    int k,l, *ptw;
public:
    Walton()
    {

    }

    Walton(int a, int b,int c)
    {
        k=a; l=b;
        ptw=new int;
        *ptw=c;
    }
    void Display()
    {
        std::cout<<"k: "<<k<<" l: "<<l<<" *ptw: "<<*ptw<<std::endl;
    }

    ~Walton()
    {
        delete ptw;
    }
};

int main()
{
    Nokia *obj=new Walton;
    obj ->Show();
   // obj->Display(); Error

   delete obj; // eta delete korle Nokia Class er object delete hobe, karon obj er
   //Type Nokia. Tain Virtual Destructor banate hobe Nokia Class e.
}




