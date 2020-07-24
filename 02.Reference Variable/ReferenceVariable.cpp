#include<iostream>

int main()
{
    //Reference mane Address
    //Reference Variable holo Internal Pointer
    //Reference variable e just variable name assign kora jay
    //Reference variable change kora mane j variable assign kora holo setakei change kora
    //Reference variable k main variable er arekta nam o bola jete pare. jmn pani k jol boli.
    //Reference variable e just ekta variable name e assign kora jay.Change kora jay na
    //Reference variable create korar somoy e declare kora lagbe

    int mainVariable;
    mainVariable=5;

    int &referenceVariable=mainVariable;
    referenceVariable +=10;

    std::cout<<mainVariable<<std::endl;
}
