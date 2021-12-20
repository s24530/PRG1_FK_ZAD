#include <iostream>
#include <vector>
#include <string>

double dot_product(){
    double iloczyn,temp,tmp;
    int  input,in;    
    std::vector<double> one;
    std::vector<double> two;
    std::cout<<"Enter amount of numbers in first vector: ";
    std::cin>>input;
    std::cout<<"Enter first vector\n";
    for(int i=0; i<input; i++){ 
        std::cin>>temp;
        one.push_back(temp);
    }
    std::cout<<"Enter amount of numbers in second vector: ";
    std::cin>>in;
    std::cout<<"Enter second vector\n";
    for(int i=0; i<in; i++){ 
        std::cin>>tmp;
        two.push_back(tmp);
    }
    if(one.size()==two.size()){
        for (int i=0; i<one.size();i++){
            iloczyn+=one[i]*two[i];
        }
    }
    else{
        std::cerr<<"ERROR\n";
        return 1;
    }
    return iloczyn;
}

int main(){
    auto x=dot_product();
    if(x!=1)
    std::cout<<"The product is equal to: "<<x<<"\n";
    
    return 0; 
}

