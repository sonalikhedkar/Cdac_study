#include<iostream>
using namespace std;
#include<string.h>

class Library{
	string l_name;
	public:
		Library(){
			
		}
		Library(string l){
			l_name=l;
			cout<<"Name of library: "<<l_name<<endl;
		}
		
};
class distributor:virtual public Library{
	string D_name;
	public:
		distributor(){
			
		}
		distributor(string d){
 		D_name=d;
 			cout<<"Name of distributor: "<<D_name<<endl;
	 }
	
};
class Author:virtual public Library{
 string  A_name;
 public:
 	Author(){
 		
	 }
 	Author(string a){
 		A_name=a;
 		cout<<"Name of Author: "<<A_name<<endl;
	 }
 	
};
class book:public distributor,public Author{
	
	string B_name;
	public:
		book(){
 		
	 }
	      book(string,string,string,string);
			void display(){
			cout<<"Name of book: "<<B_name<<endl;
		}
};
book::book(string l,string d,string a,string b):distributor(d),Author(a),Library(l){
			B_name=b;
		}
int main(){
	
	book b1("cdac library","IET","vishal","cpp");
	b1.display();
	
}
