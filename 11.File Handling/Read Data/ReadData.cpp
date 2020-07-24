#include<iostream>
#include<fstream>

int main()
{
   std::ifstream fin;
   fin.open("MyFile.txt", std::ios::in);
   std::string address;

   while(!fin.eof())
   {
       address=fin.get();
       std::cout<<address;

   }
   fin.close();

}
