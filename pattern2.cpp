#include <iostream>
using namespace std;
int main(){
    int row ,col;
   cout<<"Enter column and row"; 
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
   


/*
1 
1 2 
1 2 3 
1 2 3 4 
*/

    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;

}
/*
1 
2 2 
3 3 3 
4 4 4 4
*/




