#include<iostream>

template <class X> class ArrayList
{
private:
    struct CodeBlock
    {
        int capacity;
        X *arr_ptr;
    };
    CodeBlock *p;
public:
    ArrayList(int capacity)
    {
        p=new CodeBlock;
        p->capacity=capacity;
        p->arr_ptr=new X[p->capacity];
    }

    void add(int index, X data)
    {
        if(index>=0 && index <= p->capacity-1)
        {
            p->arr_ptr[index]=data;

        }
        else
        {
            std::cout<<"Invalid Index Number"<<std::endl;
        }
    }

    void viewAt(int index)
    {
        if(index>=0 && index <= p->capacity-1)
        {
            std::cout<< p->arr_ptr[index]<<std::endl;
        }
        else
        {
            std::cout<<"Invalid Index Number"<<std::endl;
        }
    }

    void viewAll()
    {
       for(int i=0; i<p->capacity; i++)
       {
           std::cout<<"Value: "<<p->arr_ptr[i]<<" at "<<i<<" index"<<std::endl;
       }
    }
};

int main()
{
    ArrayList <std::string> list1(5);
    list1.add(0,"Keya");
    list1.add(1,"Mitu");
    list1.add(2,"Zakir");
    list1.add(3,"Setu");
    list1.add(4,"C++ Programming");
    list1.viewAt(2);

    list1.viewAll();

}



