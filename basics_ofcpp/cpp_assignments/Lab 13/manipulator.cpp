#include <iostream>
#include <istream>
#include <sstream>
#include <string>
#include<iomanip>
 
using namespace std;
 
int main()
{
	string line;
	istringstream str("           Programmer");
	getline(str >>ws, line);
    cout<<line<<endl;
       
    cout<<setfill('*')<<endl;
  	cout<<"a"<<setw(15)<<"b"<<endl;
 
    return 0;
}
