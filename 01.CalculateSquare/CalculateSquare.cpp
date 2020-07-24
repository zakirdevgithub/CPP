#include<iostream>
//eta Header File. ekhane cout, cin, <<, >>
// esober just Delaration thake, kono Program/Code thake na.
// Program/Code thake Header file e.
//Code run korle Preprocessor namok software Header file er code ene dey #include<iostream>
//namok file er jaigay bosiye diye .i namok file banay ja pura code soho RAM e thake
//pore .i file k compiler ese .obj file e rupantor kore. terpor Linker ese .obj file er
//sate library file(sei sob code ja computer .obj er maximum bujhleo egula bojhe na)
//er sate jukto kore .exe file banay

int main()
{
    //cout,cin kono function na. egula object.
    //endl holo manipulator
    int number;
    std::cout<<"Enter A Number: ";
    std::cin>>number;
    std::cout<<"Square of "<<number<<" is: "<<number*number<<std::endl;
}
