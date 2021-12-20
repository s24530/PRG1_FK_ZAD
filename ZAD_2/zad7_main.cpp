#include <iostream>
#include <vector>
#include <string>

struct Student{

    std::string name;
    std::string surname;
    std::vector<double> grades;

};

struct Group{
    std::string tag;
    std::vector<Student> studs;
}; 

void add_to_group(Group& group, Student& stud){
    group.studs.push_back(stud);   
}


int main(){
    auto s1 = Student{"Marcin", "Iras", {5,5.5,6,2,5,4,3}};
    auto s2 = Student{"Karol", "Elas" ,{2,2,2.5,4,3,2}};
    auto s3 = Student{"Marek", "Klew", {5,5,4,2,3,5.5,2}};
    auto s4 = Student{"Jacek", "Placek",{1,2.5,3,4,6,5,2}};
    
    auto group = Group{"group", {s1}};
    add_to_group(group, s2);
    add_to_group(group, s3);
    add_to_group(group, s4);
    
    std::cout<<"Students in group: ";
    for(auto i : group.studs){
        std::cout<<i.name<<" "<<i.surname<<", ";
    }
    std::cout<<"\n";
    return 0;
}
