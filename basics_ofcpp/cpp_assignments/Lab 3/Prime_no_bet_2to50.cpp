#include<iostream>
using namespace std;
int main(){
	int count=0;
	for(int i=2;i<=50;i++){
		int j=2;
		for(;j<i;j++){
			if(i%j==0)
			break;
		}
	if(i==j)
	count++;
	
	}
	cout<<"Total prime number between 2 to 50 are "<<count<<endl;
	
	return 0;
}
