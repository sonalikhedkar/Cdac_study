#include <iostream>
using namespace std;
//dangling pointer situation 

#include<string.h>
class String{
   int len;
   char *ptr;//class data member is pointer 
   //and and you don't provided copy constructor then dangling situation occurs

   public:
   String(char *ptr1){
    len =strlen(ptr1);
    ptr =new char[len+1];
    strcpy(ptr,ptr1);
    
    
   }
   ~String();
   void display();
};
 String::~String(){
    cout<<"destructor is called"<<endl;
    if(ptr)
    delete[]ptr;
    ptr=NULL;
 }
 void String::display(){
  cout<<"length is "<<len<<endl;
  cout<<"String is "<<ptr<<endl;
 }
int main(){
     String s1("sonali");
     s1.display();
    {
     String s2(s1);
     s2.display();
     s2.~String();
    }
    s1.display();
    return 0;
}
/*
length is 6
String is sonali
length is 6
String is sonali
destructor is called
destructor is called
length is 6
String is �pt//dangling pointer ptr points to garbage
destructor is called
*/
