#include <iostream>
using namespace std;
#include<string.h>
class library{
string l_name;
    public:
    library(){
        cout<<"In default of library"<<endl;
    }
    library(string ln){
        l_name=ln;
        cout<<"library name is "<<l_name<<endl;
    }
    
};
class Author:virtual public library{
    string A_name;
    public:
    Author(){
        cout<<"In default of Author"<<endl;
    }
    Author(string An){
       A_name=An;
       cout<<"Author name is "<<A_name<<endl;
    }
};
class distributor:virtual public library{
    string d_name;
    public:
    distributor(){
        cout<<"In default of distributor"<<endl;
    }
    distributor( string dn){
        d_name=dn;
        cout<<"distributor name is "<<d_name<<endl;
    }
};
class book:public Author,public distributor{
    string b_name;
    public:
    book(){
        cout<<"In default of book"<<endl;
    }
    book(string,string,string,string);
};
book::book(string An,string dn,string bn,string ln):Author(An),distributor(dn),library(ln){
        b_name=bn;
        cout<<"book name is "<<b_name<<endl;
}
int main(){
    //  string name_l,name_a,name_d,name_b;
    //  cout<<"Enter libray name"<<endl;
    //  cin>>name_l;
    //  cout<<"Enter Author name"<<endl;
    //  cin>>name_a;
    //  cout<<"Enter distributor name"<<endl;
    //  cin>>name_d;
    //  cout<<"Enter book name"<<endl;
    //  cin>>name_b;
    // book b1(name_a,name_d,name_b,name_l);
     
    book b("dyanmandal","sai","kanetkar","cprog");
}
