#include<iostream>
#include<fstream>


int main()
{
    std::ofstream fout;
    fout.open("MyFile.txt", std::ios::out);
    fout<<"Hello, I am Zakir Hossain";
    fout.close();
}
