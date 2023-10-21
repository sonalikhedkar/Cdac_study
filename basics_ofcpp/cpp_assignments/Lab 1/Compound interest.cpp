#include<iostream>
 using namespace std;
 
 #include<math.h>
 int main(){
    double P =2000;// principal
    float r = 8.5;//rate of interest
     int n = 1;//number of times interest is compounded per year
    int t = 3; //time (in years)
  double res=pow(1+(r/100),n);
    double A = P*res;
    cout<<"compound interest is: "<<A-P<<endl;
 	return 0;
 }
