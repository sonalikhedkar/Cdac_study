#include<iostream>
using namespace std;
class student
{
	int m1, m2;
	public:
		student (int m1, int m2)
		{
			this-> m1=m1;
			this-> m2=m2;
		}
		int total ()
		{
			return m1+m2;
		}
};

class sports
{
	int sm1;
	public:
		sports (int sm1)
		{
			this->sm1=sm1;
		}
		int sports_marks()
		{
			return sm1;
		}
};

class result:public student,public sports
{
	float avg;
		public:
		  	result(int m1,int m2,int sm1):student(m1,m2),sports(sm1)
			{
				
			}
			void display_avg()
			{
				avg = float(student::total()+sports::sports_marks())/3;
				cout<<"Average of student & sports marks "<<avg<<endl;
			}
			
};

int main()
{
	result r1(20,30,50);
	r1.display_avg();
	
}                
