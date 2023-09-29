#include<iostream>
using namespace std;
#include<string.h>
class address{
	string city;
	long long pin;
	public:
		void display();
};
void address::display(){
	cout<<"address of student:"<<endl;
	cout<<"city :"<<city<<endl;
	cout<<"pin :"<<pin<<endl;
}
class Date{
	int dd,mm,yy;
	public:
		Date(int,int,int);
		void displayDate(){
			cout<<dd<<"/"<<mm<<"/"<<yy;
		}
};
Date::Date(int d,int m,int y){
	dd=d;
	mm=m;
	yy=y;
}
class student{
	int rollno;
	Date DOB;
	Date adm_date;
	address ad;
	public:
		void display();
};
void student::display(){
	cout<<"roll no of student is:"<<rollno<<endl;
	cout<<"date of birth of student :";
	DOB.displayDate();
	cout<<endl;
	cout<<"admission date is:";
	adm_date.displayDate();
	cout<<endl;
	ad.display();
	
}
int main(){
  int r_no;
  cout<<"Enter your rollno :"<<endl;
  cin>>r_no;
  student s1(r_no);
  cout<<"enter your date of birth :"<<endl;
  cout<<"dd:";
  int dd,mm,yy;
  cin>>dd;
  cout<<"mm:";
  cin>>mm;
  cout<<"yy:";
  cin>>yy;
  Date dob(dd,mm,yy);
  cout<<"enter your date of Admission :"<<endl;
  cout<<"dd:";
  int dd1,mm1,yy1;
  cin>>dd1;
  cout<<"mm:";
  cin>>mm1;
  cout<<"yy:";
  cin>>yy1;
  Date d_ad(dd1,mm1,yy1);
  

  
}
