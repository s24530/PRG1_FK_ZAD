#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_palindromes(std::vector<std::string> vec){
    auto pal = std::vector<std::string>{};

    for(int i=0;i<vec.size();i++){
        std::string word = vec[i]; 
        
        for (int j = 0; j<word.size()/2;j++){
            if(word[j]!=word[word.size()-1-j]){
                break;
            }
           
            if(j==word.size()/2-1){
                pal.push_back(word + " ");
            }
        }
    } 
    
    return pal;     
}

int main(){
    auto words = std::vector<std::string>{"kajak","lalka","jaj","zegar"};
    std::vector<std::string> end = filter_palindromes(words);
    for(int i=0; i<end.size();i++){        
        std::cout<<end[i]<<"\n";
    }
    return 0;
}


