#include <iostream>
#include <string>

bool is_palindrome(std::string a){
    for(int i=0;i<a.size()/2;i++)
    {
        if(a[i]==a[a.size()-1-i])
        {
            continue;
        }
        else
            return false;
    }
    return true;
}

int main(){
    std::string slowo;
    std::cout<<"Podaj slowo: ";
    std::cin>>slowo;
    if(is_palindrome(slowo)) std::cout<<"Jest palindromem\n";
    else std::cout<<"Nie jest palindromem\n";
    return 0;
}
