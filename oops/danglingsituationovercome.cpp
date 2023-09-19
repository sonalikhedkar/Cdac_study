#include <iostream>
using namespace std;
//dangling pointer situation  overcome by creating own copy constructor

#include<string.h>
class String{
   int len;
   char *ptr;//class data member is pointer 
   //and and you don't provided copy constructor then dangling situation occurs

   public:
   String(char *ptr1){//constructor
    len =strlen(ptr1);
    ptr =new char[len+1];
    strcpy(ptr,ptr1);
      
   }
   String(String&);//Declaration of own copy constructor
   ~String();
   void display();
};
String::String(String &obj){//defination outside the class
    this->len=obj.len;//obj is new name given to s1 object
    ptr=new char[this->len+1];
    strcpy(ptr,obj.ptr);//we can use or not this because no same name
}
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
     String s2(s1);//s1 passed as reference to copy content into s2
     //this pointer contains s2 address
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
String is sonali//s2 destructed but s1 have no effect because they both pointing to differnt adress
destructor is called
*/
