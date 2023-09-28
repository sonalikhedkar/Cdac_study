#include<iostream>
using namespace std;
class employee{
	int id;
	public:
	employee(){
		id =0;
		cout<<"in the default of emp"<<endl;
	}
	employee(int i){
		id=i;
	}
    virtual	int findsalary(){
		return 0;
	}
	void display(){
		cout<<"salary is "<<findsalary()<<endl;
	}
	
};
class wageemployee: public employee{
	int hrs;
	int rate;
	public:
		wageemployee(){
			cout<<"int default of wage"<<endl;
		}
		wageemployee(int,int,int);
    int findsalary();
 	void display(){
		cout<<"salary of wageemployee"<<findsalary()<<endl;
	}
	
	
};
wageemployee::wageemployee(int i,int h,int r):employee(i){
	hrs=h;
	rate=r;
}
int wageemployee::findsalary(){
	return hrs*rate;
}
class salesmanger:public wageemployee
{
	int sales,comm;
	public:
		salesmanger(){
			cout<<"in default of sale"<<endl;
		}
		salesmanger(int,int,int,int,int);
	int findsalary();
		void display(){
		cout<<"salary salesmanager "<<findsalary()<<endl;
	}
	
};
salesmanger::salesmanger(int i,int r,int h,int s,int c):wageemployee( i,h,r){
	sales=s;
	comm=c;
	
}
int salesmanger::findsalary(){
	return (wageemployee::findsalary())+sales*comm;
	}
int main()
{
 employee *ptr=new employee();
 ptr->findsalary();
 ptr->display();
 ptr=new wageemployee(3,300,100);
 ptr->findsalary();
 ptr->display(); 
 ptr=new salesmanger(1,2,10,200,3);
 ptr->findsalary();
 ptr->display(); 
	
 if(ptr)
  delete ptr;
  ptr=NULL;	
} 
