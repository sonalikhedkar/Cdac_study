#include<iostream>
using namespace std;
#include<string.h>
//assignment operator

class string1
{
	int len;
	char *ptr;
	public:
		string1(){
			cout<<"in default of string1"<<endl;
		}
		string1(char*);
	    operator=(string1&);	//s3.operator=(s1)
		void display();
};

string1::string1(char *ptr1){
	len=strlen(ptr1);
	ptr =new char[len+1];
	strcpy(ptr,ptr1);
}

void string1::display(){
	cout<<"length is :"<<len<<endl;
	cout<<"string is :"<<ptr<<endl;
}

string1::operator=(string1& str){
	this->len=str.len;
    if(ptr)
    delete ptr;
    ptr =new char[this->len+1];
    strcpy(ptr,str.ptr);
}

int main(){
	string1 s1("sonali");
	s1.display();
	string1 s2=s1;//default copy constructor
	s2.display();
	string1 s3("khedkar");
	s3.display();
	s3=s1;//s3.operator=(s1)  //by default assignment opeartor invoked
	s3.display();
	return 0;
}
