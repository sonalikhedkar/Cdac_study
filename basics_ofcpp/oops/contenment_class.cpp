#include <iostream>
using namespace std;
#include<string>
class Date{
    int dd,mm,yy;
    public:
    Date(){
        dd=02;
        mm=01;
        yy=2002;
    }
     void display();
 
};
void Date::display(){
    cout<<"date of birth of user"<<endl;
    cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
class Address{
    string city;
    int  pin;
    public:
    Address(){
        city="ahmednagar";
        pin=414113;
    }
    Address(string,int);
    void display();
};
Address::Address(string c,int p){
    city=c;
    pin=p;
}
void Address::display(){
    cout<<"address of user: "<<endl;
    cout<<"city:"<<city<<endl;
    cout<<"pin:"<<pin;
}
class User{
    int id;
    Address loc;
    Date dob;
    public:
    User(){
        id=1;
        loc=Address();
    }
    User(int, string, int);
    void display();
};
User::User(int i,string c,int p):loc(c,p){
    id=i;
}
void User::display(){
    cout<<"user id:"<<id<<endl;
    dob.display();
    loc.display();

}
int main(){
    User u1(4,"pune",412002);
    u1.display();
}
// user id:4
// date of birth of user
// 2/1/2002
// address of user: 
// city:pune
// pin:412002

