#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
struct Student{

    std::string name;
    std::string surname;
    std::vector<double> grades;

};

struct Group{
    std::string tag;
    std::vector<Student> studs;
}; 

Group best_group_name(std::vector<Group> groups){
    std::vector<double> mid;
    
    for(auto grp : groups){
        std::vector<double> grd;
        for(auto stud :  grp.studs){
            grd.insert(grd.end(),stud.grades.begin(),stud.grades.end());
        }
        std::sort(grd.begin(), grd.end());
        auto size = grd.size();
        
        if(size & 1){
            mid.push_back(grd[size*1/2]);
        }
        else{
        auto nr=size*1/2;
        auto nmr=nr-1;
        double med = (grd[nmr] + grd[nr])*1/2;
        mid.push_back(med);
        }
    }
    double max;
    auto n=0;
    
    for(int i=0; i< mid.size(); i++){
        if(mid[i]>max){
            max = mid[i];
            n=i;
        }
    }
    return groups[n];
}

int main(){
    auto s1 = Student{"Marcin", "Iras", {5,5.5,6,2,5,4,3}};
    auto s2 = Student{"Karol", "Elas" ,{2,2,2.5,4,3,2}};
    auto s3 = Student{"Marek", "Klew", {5,5,4,2,3,5.5,2}};
    auto s4 = Student{"Jacek", "Placek",{1,2.5,3,4,6,5,2}};
    
    auto group1 = Group{"LIONS", {s4, s1}};
    auto group2 = Group{"TIGERS", {s2, s3}};

    std::vector<Group> groups = {group1, group2};

    std::cout<<"Best group: "<< best_group_name(groups).tag<<"\n";

    return 0;
}
