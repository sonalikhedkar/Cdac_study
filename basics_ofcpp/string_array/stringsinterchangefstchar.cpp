#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char c0=a[0];
    a[0]=b[0];//to interchange the first char
    b[0]=c0;
    cout<<a<<" "<<b;
    
  
    return 0;
}
//4 2
// abcdef
// ebcd af
