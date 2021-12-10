#include<iostream>
#include <string>

int main(){
    std::string imie,drugie;
    std::cin>>imie>>drugie;
    if(imie.length()>drugie.length())
    {
        std::cout<<"Pierwsze imie jest dłuższe!"<<"\n";
    }
    else if(imie.length()<drugie.length())
    {
        std::cout<<"Drugie imie jest dłuższe..."<<"\n";
    }
    else 
    {
        std::cout<<"Imiona są równe."<<"\n";
    }   
    return 0;
}
