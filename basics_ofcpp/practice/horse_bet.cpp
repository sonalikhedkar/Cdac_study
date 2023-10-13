// #include<iostream>
// using namespace std;
// int main(){
// 	int horses[4]={40,50,30,40};
// 	int k=100;
// 	int bet=0;
// 	int count=0;
	
// 	for(int i=0;i<4;i++){
// 		bet=bet+horses[i];
// 		if(bet>k){
// 			break;
// 		}
// 		count++;
// 	}
// 	cout<<" no of continuous horses can bet of "<<k<<"$:"<<count;
// }

#include<iostream>
using namespace std;
int main(){
	int horses[10]={30,40,50,20,20,10,90,10,10,10};
	int k=100;
	int maxcount;
	
	for(int i=0;i<10;i++){
		int bet=0;
		int count=0;
		for(int j=i;j<10;j++){
	        if(bet>=k){
			break;
	      	}
		 bet=bet+horses[j];
		 count++;
    	}
    	if(count>maxcount){
		    maxcount=count;
        	}
		
	 }
	cout<<" no of continuous horses can bet of "<<k<<"$:"<<maxcount;
}
