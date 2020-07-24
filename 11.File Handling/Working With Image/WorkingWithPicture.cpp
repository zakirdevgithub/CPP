#include<iostream>
#include<fstream>

int main()
{
    std::ifstream fin;
    fin.open("image3.jpg", std::ios::binary);

    std::ofstream fout;
    fout.open("image.jpg", std::ios::binary);
    char ch;

    while(!fin.eof())
    {
        ch=fin.get();
        fout<<ch;
    }



    fin.close();
}
