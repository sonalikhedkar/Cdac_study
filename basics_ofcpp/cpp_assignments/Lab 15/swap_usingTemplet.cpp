#include<iostream>
using namespace std;
template< class T>
void  swapp(T &a,T& b){
	T temp;
	temp=a;
	a=b;
	b=temp;
//cout<<a<<" "<<b<<endl;
	
}
int main(){
    float x=5.5;
    float y=20.10;
	cout<<"values Before swaping"<<endl;			
	cout<<x<<" "<<y<<endl;
	cout<<"values after swaping"<<endl;
	swapp(x,y);
	cout<<x<<" "<<y<<endl;
	
	
}

