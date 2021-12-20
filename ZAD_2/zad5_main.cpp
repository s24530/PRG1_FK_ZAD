#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split(std::string x){
    std::string word;
    std::vector<std::string> vec;
    bool can_split = 1;
    
    for(auto i=0; i<x.size(); i++){
        if(x[i] == ' '){
            if(can_split){
            vec.push_back(word);
            word="";
            can_split=0;
            }
        continue;
        }
    word+=x[i];
    can_split = 1;
    }
    if (x.back()!= ' '){
        vec.push_back(word);
    }
    return vec;
}

int main(){
    std::string txt = "I like programming";
    for(auto i=0; i<split(txt).size();i++){
        std::cout<<split(txt)[i]<<", ";
    }
    std::cout<<"\n";
    return 0;
}
