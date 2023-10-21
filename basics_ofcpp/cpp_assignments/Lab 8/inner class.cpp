//"	Write a program to implement inner class in C++


#include<iostream>
using namespace std;
 
 class demo{
 	int a;
 	public:
 		
		 
 		void show(){
 		     
 	         cout<<"im outer class"<<endl;
 	        
 	         //cout<<"value of b"<<demo2::show();
			 }
 	class demo2{
 	 	int b;
 		public:
 			void display(){
 				cout<<"in inner class"<<endl;
 			//	cout<<a<<"  "<<b;//error
 			cout<<b<<endl;
 		//	demo::void show();//error
			 }
	 };

 };
 int main(){
 	demo d2;
 	d2.show();
 	demo::demo2 d;
	 d.display();
 }




