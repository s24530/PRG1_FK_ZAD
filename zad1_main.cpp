#include <iostream>
#include <vector>
#include <string>
#include <cmath>
bool pierwsza(int x){
    
    if(x<2)
    {    
        return false;
    }    
    for(int i=2; i*i<=x; i++)
    {
        if (x%i==0) 
        {        
            return false;
        }    
    }    
    return true;
}

int main(int argc, char* argv[]){
    auto stack=std::vector<int>{};    
    int x,y;
    std::string prime; 
    x = std::stoi(argv[1]); 
    for (int i = 2; i<=x; i ++){
        if (pierwsza(i))
        {
           stack.push_back(i);
           prime += std::to_string(i)+" "; 
        }
       
    }
    std::cout<<prime<<" ";
    std::cout<<"\n";
    for( int i=0; i<stack.size();i++)
    {  
        std::cout<<stack[i]<<" ";
    }
    std::cout<<"\n";
    return 0;
}
