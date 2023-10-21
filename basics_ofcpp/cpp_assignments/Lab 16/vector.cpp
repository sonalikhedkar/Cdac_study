#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>vec;
	cout<<vec.size()<<endl;
	
	for(int i=0;i<5;i++){
		vec.push_back(i);
	}
	vec.push_back(5);
	vec.pop_back();
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
}
