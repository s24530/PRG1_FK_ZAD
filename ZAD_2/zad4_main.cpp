#include <iostream>
#include <vector>
#include <string>

struct Student{

    std::string name;
    std::string surname;
    std::vector<double> grades;

};

double average_of(Student stud){
    float average;

    for(float i : student.grades){
        average+=i;
    }

    return average/student.grades.size();
}

int main(){
    auto stud1=Student{"Jacek", "Placek", {2,2.5,4,6,5.5,4}};
    
    std::cout<<"Grades average: "<<average_of(stud1) <<"\n";
    
    return 0;
    
}
