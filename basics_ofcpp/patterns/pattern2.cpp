#include <iostream>
using namespace std;
int main(){
    int row ,col;
   cout<<"Enter column and row"; 
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"#"<<" ";
        }
        cout<<endl;
    }
    
/*
#
# #
# # #
# # # #
*/


     for(int i=0;i<=row;i++){
        for(int j=0;j<=row-i;j++){
            cout<<"*"<<" ";
        
        }
        
        cout<<endl;
  
/*
* * * * * 
* * * * 
* * * 
* * 
* 
*/


    
   return 0;

}
