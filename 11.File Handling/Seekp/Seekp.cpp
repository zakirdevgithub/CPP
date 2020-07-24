#include<iostream>
#include<fstream>

//seekp use kora hoy Write mode e Cursor er position change korar jonno
//seekp(cursor koto ghor sorabe, kothay theke suru korbe);
//Kothay theke suru korbe ter 3 ta stage ase.

//1. std::ios_base::beg
//Example: seekp(4,std::ios_base::beg) etar mane holo cursor 0 position theke suru kore 4 ghor
//porjonto  move koro

//2. std::ios_base::cur
//Example: seekp(4,std::ios_base::cur) etar mane holo cursor current position theke suru kore 4 ghor
//porjonto move koro

//3. std::ios_base::end
//Example: seekp(4,std::ios_base::end) etar mane holo cursor end position theke suru kore 4 ghor
//porjonto  move koro


int main()
{
    std::ofstream fout;
    fout.open("hello.txt",std::ios::out);

    fout<<"Hello Zakir, How are you?";
    std::cout<<fout.tellp()<<std::endl;
    fout<<"I am fine";
    std::cout<<fout.tellp()<<std::endl;
    fout.seekp(4,std::ios_base::beg);
    std::cout<<fout.tellp()<<std::endl;
    fout.seekp(4,std::ios_base::cur);
    std::cout<<fout.tellp()<<std::endl;
    fout.seekp(4,std::ios_base::end);
    std::cout<<fout.tellp()<<std::endl;

    fout.close();

}
