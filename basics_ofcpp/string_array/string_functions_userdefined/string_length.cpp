
#include<iostream>
using namespace std;
int lengthofstr(char*);
int main(){
   char a[]="khedkar";
   int length=lengthofstr(a);
   cout<<"length of string is "<<length;
    return 0;
}
int lengthofstr(char *b){
    int len=0;
    while(*b!='\0'){
      len++;
      b++;
    }
    return len;
}
