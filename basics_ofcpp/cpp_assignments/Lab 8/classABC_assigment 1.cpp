#include<iostream>
using namespace std;


class A
{
	public:
	
    	A(){
			cout<<"in default of A"<<endl;
		}
			~A(){
			cout<<"in destructor of A "<<endl;
		}
};

class B:public A{
	
	public:
		B(){
			cout<<"in default of B"<<endl;
		}
		~B(){
			cout<<"in destructor of B"<<endl;
		}
};
class C:public A{
	
	public:
		C(){
			cout<<"in default of C"<<endl;
		}
		~C(){
			cout<<"in destructor of C"<<endl;
		}
};

int main()
{
  B bobj;
  C cobj;
  

}
//in default of A
//in default of B
//in default of A
//in default of C
//in destructor of C
//in destructor of A
//in destructor of B
//in destructor of A
	

