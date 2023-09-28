
#include<iostream>
using namespace std;
//pointer to pointer
int main(){
   char a[5]="pune";
   char *b=a;
   for(int i=0;i<5;i++){
   cout<<*b;
   b++;
   }//pune 
   cout<<endl;
  cout<<gets(a)<<endl;//pune
   printf("%s",(a+0));//pune
 //  cout<<puts(a);
    return 0;
}
