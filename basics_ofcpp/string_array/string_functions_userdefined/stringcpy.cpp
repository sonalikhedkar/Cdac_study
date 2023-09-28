
#include<iostream>
using namespace std;
void strcpy(char*,char*);
int main(){
   char a[]="hi ";
   char b[3];
   strcpy(a,b);
   cout<<b;//a copied into b
    return 0;
}
void strcpy(char *a,char *b){
    
    while(*a!='\0'){
     *b=*a;
      a++;
      b++;
    }
    
    *b='\0';
   
}
