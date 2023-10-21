#include <iostream>

using namespace std;
#include <list>
int main(){
	
	list<int> li={1,2,3,4};
	list<int>::iterator itr=li.begin();
	li.insert(itr,5);
	for(itr=li.begin();itr!=li.end();++itr)
		cout<<*itr<<" ";
	
}
