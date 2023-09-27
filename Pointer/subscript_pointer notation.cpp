#include<iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,4,5};
	//take address using 
	cout<<&a[0]<<endl;// subcript notation//a[2],a[3]
	//pointer notation
	cout<<(a+0)<<endl;//a is base address+0
	//(a+1),(a+2),(a+3)
	cout<<(0+a)<<endl;
	if(&a[0]==(a+0)){
		cout<<"a[0]==(a+0)==(0+a)"<<endl;
	
	//take value using
	//subcript notation
	cout<<a[0]<<endl;//a[1],a[2],a[3]
	cout<<0[a]<<endl;
	if(a[0]==0[a])
       cout<<"a[0]==0[a]"<<endl;//we can write a[0]or  0[a] as well
	}
	//pointer notaion
	cout<<*(a+0)<<endl;//*(a+1),*(a+2)
	cout<<*(0+a)<<endl;
	
	
}
