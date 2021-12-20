#include <iostream>
#include <string>
#include <vector>


int main() {
  while (true) {
    std::string input;
    std::getline(std::cin, input);

    if (input=="stop"){
        break;
    }
    
    char start = input[0];
    char end = input[2];
    std::vector<std::string> range;


    if (start <= end) {
      for (auto i = start; i <= end; i++) {
        std::string txt;
        txt = i;
        range.push_back(txt);
      }
    } 
    else {
      for (auto i = end; i <= start; i++) {
        std::string txt;
        txt = i;
        range.push_back(txt);
      }
    }

    for (auto i : range){
        std::cout << i;
    }    
    std::cout << std::endl;
  }

  return 0;
}
