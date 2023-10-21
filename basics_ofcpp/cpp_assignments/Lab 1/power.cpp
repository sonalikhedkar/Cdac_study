#include<iostream>
 using namespace std;
 
 int main(){
 	 int base,exp;
 	 double power=1;
 	 cout<<"Enter the base and expo"<<endl;
 	 cin>>base>>exp;
 	 for(int i=1;i<=exp;i++){
 	 	power = power*base;
	  }
	  cout<<"power base:"<<base<<"="<<power;
 	return 0;
 }
