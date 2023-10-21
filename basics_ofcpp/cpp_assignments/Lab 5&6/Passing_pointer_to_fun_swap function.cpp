#include<iostream>
 using namespace std;
 //pass by reference
/* void swap(int*,int*);
 
 int main(){
 	int a,b;
 	cout<<"Enter two number";
 	cin>>a>>b;
 	cout<<"Before Swaping: "<<a<<"\t"<<b<<endl;
 	swap(&a,&b);
 	cout<<"after Swaping: "<<a<<"\t"<<b<<endl;
 	return 0;
 }
 void swap(int *a,int *b){
 	int temp;
 	temp=*a;
 	*a=*b;
	*b=temp;
 }*/
 
 void swap(int &,int &);
 
 int main(){
 	int a,b;
 	cout<<"Enter two number";
 	cin>>a>>b;
 	cout<<"Before Swaping: "<<a<<"\t"<<b<<endl;
 	swap(a,b);
 	cout<<"after Swaping: "<<a<<"\t"<<b<<endl;
 	return 0;
 }
 void swap(int &p,int &q){
 	int temp;
 	temp=p;
 	p=q;
	q=temp;
 }
