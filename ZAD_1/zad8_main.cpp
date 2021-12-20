#include <iostream>
#include <string>
void show(std::string x, int y){

    for( int i=0; i<x.size(); i+=y)
    {
        std::cout<<x[i];
    }
    std::cout<<"\n";
}

int main(){
    std::string wyraz;
    int ck;
    std::cout<<"Podaj wyraz: ";
    std::getline(std::cin,wyraz);
    std::cout<<"Podaj co który znak wyświetlić: ";
    std::cin>> ck;
    show(wyraz,ck);
    return 0;   
}
