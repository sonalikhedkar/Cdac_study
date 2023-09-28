
#include<iostream>
using namespace std;
void strconcat(char*,char*);
int main(){
   char a[]="hi ";
   char b[]="sonali";
   strconcat(a,b);
   cout<<a;//final string stored in a
    return 0;
}
void strconcat(char *a,char *b){
    
    while(*a!='\0'){
      a++;
    }
    while(*b!='\0'){
        *a=*b;
         a++;
         b++;
    }
    *a='\0';
   
}
