#include<iostream>
using namespace std;

int main(){
	float temp[2][7];
	for(int i=0;i<2;i++){//2 cities
		for(int j=0;j<7;j++){ //7 days
			cout<<"Enter the temperature of city "<<i+1<<" at day "<<j+1<<endl;
			cin>>temp[i][j];
		}
	}
	for(int i=0;i<2;i++){//2 cities
		for(int j=0;j<7;j++){ //7 days
			cout<<"temperature of city "<<i+1<<"  at day "<<j+1<<" is "<<temp[i][j]<<endl;
			
		}
	}
	
	return 0;
}
