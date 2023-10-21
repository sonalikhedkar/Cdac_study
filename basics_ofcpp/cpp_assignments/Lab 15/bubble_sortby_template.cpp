#include<iostream>
using namespace std;
template <class T>
void swapp(T&a,T&b){
	 T temp;
	 temp=a;
	 a=b;
	 b=temp;
}
int main(){
	
   int arr[5]={6,5,3,1,2};
   int size=5;
   for(int i=0;i<5;i++){
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
   
   for(int i=0;i<size;i++){
   	for(int j=0;j<(size-1)-i;j++){
   		if(arr[j]>arr[j+1]){
   			swapp(arr[j],arr[j+1]);
	   }
   }
}
    for(int i=0;i<5;i++){
    	cout<<arr[i]<<" ";
	}

}

