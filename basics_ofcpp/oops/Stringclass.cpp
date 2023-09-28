#include <iostream>
using namespace std;
#include<string.h>
//user defined string class
class String{
     int len;
     char *ptr; //character pointer class member we have to create own copy contructor and destructor
     public:
      String(char*ptr1){//string  address passed as arguments
        len=strlen(ptr1);
        ptr = new char[len+1];
       strcpy(ptr,ptr1);

     }
     String( char ch,int len){//char and length are passed
        this->len=len;
        int i;
        ptr = new char[this->len+1];
       for(i=0;i<this->len;i++){
         ptr[i]=ch;
         cout<<ch;
       }
       ptr[i]='\0';//string always terminated with \0
     }
     String(int len){//string length  passed as arguments
        this->len=len;
        ptr = new char[this->len+1];
        char str[this->len+1];//len =10+1=11 size
        cout<<"Enter the string";
        cin>>str;
        strcpy(ptr,str);

     }
     String(){//no arguments passed
        cout<<"Enter length "<<endl;
        cin>>this->len;
        ptr = new char[this->len+1];
        char str[this->len+1];//len =10+1=11 size
        cout<<"Enter the string"<<endl;
        cin>>str;
        strcpy(ptr,str);

     }
     void show();

};
void String::show()
{
    cout<<"string is "<<ptr<<endl;
    cout<<"length is "<<len<<endl; 
}
int main(){
    String s1("sonali");
    s1.show();
    String s2('*',50);//constructor with two arguments
    s2.show();
    String s3(10); //constructor with one arguments
    s3.show();
    String s4;//constructor with no arguments
    s4.show();
    return 0;
}
