#include<iostream>
using namespace std;
//ways to define functions
void add();//function prototype/declaration
void add(int,int);
int sum();
int sum(int,int);
int main(){
    add();//call to function//at function calling no return type 
    add(5,5);
    int summ=sum();
    cout<<summ<<endl;
    int sum1=sum(2,4);
    cout<<sum1<<endl;
    return 0;
}
//case 1-->takes nothing returns nothing
void add(){// add function cannot takes any arguments
   int a=10;
   int b=20;
   cout<<a+b<<endl;
}
//case 2-->takes something returns nothing
void add(int a,int b){//two parameters are taken
    cout<<a+b<<endl;
}
//case 3-->takes nothing returns something
int sum(){
    int a=10;
    int b=20;
    return a+b;//only one value can return
}
//case 4-->takes something returns something
int sum(int a,int b){
    
    return a+b;//only one value can return
}
