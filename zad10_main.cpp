#include <iostream>
#include <string>
void word(int box, std::string word){
    std::cout<<"*"<<word;
    for (int i=1; i<=box-word.size();i++) 
    {
        std::cout<<" ";
    }
    std::cout<<"*\n"; 
}
void box_print(std::string a,std::string b,std::string c,std::string e,std::string d){
    int box=0;
    if(a.size()>box)
    {
        box=a.size();
    }
    if(b.size()>box)
    {
        box=b.size();
    }
    if(c.size()>box) 
    {
        box=c.size();
    }
    if(e.size()>box) 
    {    
        box=e.size();
    }
    if(d.size()>box) 
    {
        box=d.size();
    }        
    for (int i=0;i<box+2;i++) 
    {    
        std::cout<<"*";
    }    
    std::cout<<"\n";
    word(box,a);
    word(box,b);
    word(box,c);
    word(box,e);
    word(box,d);
    for (int i=0;i<box+2;i++) 
    {
        std::cout<<"*";
    }
    std::cout<<"\n"; 
}

int main(){

    std::string a,b,c,d,e;
    std::cin>>a>>b>>c>>d>>e;
    box_print(a,b,c,d,e);
    return 0;
}
