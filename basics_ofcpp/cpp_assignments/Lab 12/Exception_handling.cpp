#include<iostream>
using namespace std;
float division(int x,int y){
	if(y==0){
		throw "Attempted to divide with zero!";
	}
      return  x/y; 
}

int main(){
	int i=25;
	int j;
//	float di;
	try{
		cout<<"Enter value j"<<endl;
		cin>>j;
     	float k=division(i,j);
		cout<<k<<endl;
	}
	catch( const char *e){
		cout<<e<<endl;
	//	cerr<<e<<endl;
	}
}
