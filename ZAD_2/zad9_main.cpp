#include <iostream>
#include <vector>

bool contains_all(std::vector<int> original, std::vector<int>& sus){
    for (const auto v : sus){
        bool not_sus = false;

        for (auto i = 0; i<original.size(); i++){
            if(original[i] == v){
                not_sus = true;
                original.erase(original.begin() + i);
                break;
            }
        } 

        if(!not_sus){
            return false;
        }
    }

    return true;
}

int main(){
    std::vector<int> x = { 1, 2, 3, 6, 8, 9 };
    std::vector<int> y = { 2, 7, 8 }; 
    std::vector<int> z = { 2, 3, 6 };


    std::cout << "Does X contain Y ? " << (contains_all(x, y) ? "Yes" : "No") <<"\n";
    std::cout << "Does X conatin Z ? " << (contains_all(x, z) ? "Yes" : "No") <<"\n";

    return 0;
}
