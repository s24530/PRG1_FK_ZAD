#include <iostream>
#include <vector>
#include <string>

struct Student{

    std::string name;
    std::string surname;
    std::vector<double> grades;

};


Student get_best_student(std::vector<Student> studs){
    std::vector<double> averages;

    for(auto i : studs){
        double average;
        for( auto j : i.grades){
            average += j;
        }
    average/= i.grades.size();
    averages.push_back(average);
    }
    double max;
    int stdn;
    
    for(int i=0; i<averages.size(); i++){
        if(averages[i]>max){
            max=averages[i];
            stdn=i;
        }
    }
    return studs[stdn];
}

int main(){
    auto s1 = Student{"Marcin", "Iras", {5,5.5,6,2,5,4,3}};
    auto s2 = Student{"Karol", "Elas" ,{2,2,2.5,4,3,2}};
    auto s3 = Student{"Marek", "Klew", {5,5,4,2,3,5.5,2}};
    auto s4 = Student{"Jacek", "Placek",{1,2.5,3,4,6,5,2}};
    std::vector<Student> students = {s1, s2, s3, s4};
    std::cout<<"Best student: "<< get_best_student(students).name<<"\n";
    return 0;
}
