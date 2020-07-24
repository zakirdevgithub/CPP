#include<iostream>
#include<fstream>

//seekg use kora hoy Read mode e Cursor er position change korar jonno
//seekg(cursor koto ghor sorabe, kothay theke suru korbe);
//Kothay theke suru korbe ter 3 ta stage ase.

//1. std::ios_base::beg
//Example: seekg(4,std::ios_base::beg) etar mane holo cursor 0 position theke suru kore 4 ghor
//porjonto  move koro

//2. std::ios_base::cur
//Example: seekg(4,std::ios_base::cur) etar mane holo cursor current position theke suru kore 4 ghor
//porjonto move koro

//3. std::ios_base::end
//Example: seekg(4,std::ios_base::end) etar mane holo cursor end position theke suru kore 4 ghor
//porjonto  move koro

int main()
{
    std::ifstream fin;
    fin.open("hello.txt",std::ios::in);
    std::cout<<fin.tellg()<<std::endl;
    char ch;
    fin>>ch;
    std::cout<<ch<<std::endl;
    std::cout<<fin.tellg()<<std::endl;
    fin.seekg(4, std::ios_base::beg);
    std::cout<<fin.tellg()<<std::endl;

}
