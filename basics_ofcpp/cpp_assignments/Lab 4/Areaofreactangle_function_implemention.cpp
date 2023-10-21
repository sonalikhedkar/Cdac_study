#include<iostream>
 using namespace std;
 void Area(int*,int,int);
 int main(){
 	int len;
 	int bre;
 	cout<<"Ente the length & breadth of rectangle:";
 	cin>>len>>bre;
	int a;
    Area(&a,len,bre);
 	cout<<"Area of reactangle"<<"="<<a;
 	return 0;
 }
 void Area(int*x,int l,int b){
 	*x=l*b;
 }
