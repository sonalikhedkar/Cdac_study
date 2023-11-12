#include<iostream>
using namespace std;
int b;//global variable
bool t=true;
float f;

int main(){
    int a;
    void add();
   // printf("%d\n",a);//lacal variable //garbage value
    printf("%d\n",b);//global variable//zero
    printf("%d\n",t);//global //by default false //zero
    printf("%f\n",f);//global//by default false //0.000
    {
        //  int m;
        // printf("%d\n",m);//local variable //garbage value
        int x;
        printf("%d\n",x);//local variable//garbage value
         int y;
        printf("%d\n",y);//local variable //garbage value
    }
    add();
}
void add(){
        int a;
       // printf("%d\n",a);//local variable //garbage value
    }
