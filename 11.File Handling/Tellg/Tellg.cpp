#include<iostream>
#include<fstream>

//tellg ekta pointer. ja istream class er member and Read mode e use kora hoy.
// streamos tellg()
//jodi kono file Read korte chai tahole Cursor kothay ase ta tellg function/pointer
//diye bujha jay.
//Jemon 'Hello' Read korte chassi
//jodi Read korar age tellg function call kori taile 0 print hobe karon
//cursor ekn 'H e ase.
//ekber Read korle cursor jabe 'e' te. tkn jodi abar tellg function call kori
//tahole print hobe 1 karon cursor tokhon 1 position e.

int main()
{
    std::ifstream fin;
    fin.open("Hello.txt",std::ios::in);
    std::cout<<fin.tellg()<<std::endl;;
    std::cout<<(char)fin.get()<<std::endl;;
    std::cout<<fin.tellg()<<std::endl;;
    std::cout<<(char)fin.get()<<std::endl;;
    std::cout<<fin.tellg()<<std::endl;;
    std::cout<<(char)fin.get()<<std::endl;;
    fin.close();
}
