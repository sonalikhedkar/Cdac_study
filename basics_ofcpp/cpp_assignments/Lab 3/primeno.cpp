#include<iostream>
using namespace std;

int main(){
	int num;
	int count;
	for(int j=2;j<=10;j++){
	cout<<"Enter the number ";
	cin>>num;
	int i;
	for(i=2;i<num;i++){
		if(num%i==0){
			break;
		}
	}
	if(num==i){
	//	cout<<"prime number";
		count++;
	} else{
	//	cout<<"not prime number";
	}
  }
  cout<<"number of prime in between 2-10 is "<<count;
	return 0;
	
}
