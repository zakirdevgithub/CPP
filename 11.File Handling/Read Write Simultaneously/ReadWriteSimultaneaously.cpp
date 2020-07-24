#include<iostream>
#include<fstream>

int main()
{
    std::ofstream fout;
    std::ifstream fin;

    fout.open("MyFile.txt",std::ios::out);
    fout<<"Hello I am a Programmer";
    fout.close();
    fin.open("MyFile.txt", std::ios::in);
    std::string show;
    while(!fin.eof())
    {
        show=fin.get();
        std::cout<<show;
    }
    fin.close();
}
