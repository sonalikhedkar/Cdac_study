#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl;//4 bytes-->integer
    cout<<sizeof(0)<<endl;//4 bytes-->int
    cout<<sizeof(short int)<<endl;//2 bytes
    cout<<sizeof(long int)<<endl;//4 bytes
    cout<<sizeof(double)<<endl;//8 bytes
    cout<<sizeof(0.0)<<endl;// 8 bytes-->double
    cout<<sizeof(float)<<endl;//4 bytes
    cout<<sizeof(0.0f)<<endl;//4 bytes-->float
    cout<<sizeof(char)<<endl;//1 bytes
    cout<<sizeof('A')<<endl;//1 bytes
    cout<<sizeof(long)<<endl;//4 bytes
    cout<<sizeof(long long )<<endl;//8 bytes
    cout<<sizeof(long double)<<endl;//12 bytes
    cout<<sizeof(bool)<<endl;//1 bytes
    
    return 0;
}
