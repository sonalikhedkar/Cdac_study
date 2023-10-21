#include<iostream>
using namespace std;
class student{
	int rno, marks;
//	int dob[]
	public:
		void getdata()
		{
			cout<<"Enter the Roll no of student"<<endl;
			cin>>rno;
			cout<<"Enter the marks of student"<<endl;
			cin>>marks;
		}
		void getrollno()
		{
			
		}
		void displaydata()
		{
			cout<<"Roll No.="<<rno<<"\t"<<"Marks ="<<marks<<"\n"<<endl;
		}
	
};
int main(){
	int n=10;
	student s1[n];
	for(int i=0;i<n;i++){
		
		s1[i].getdata();
	}
     for(int i=0;i<n;i++){
		
		s1[i].displaydata();
		
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i].getdata()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	s[i].put();
}
	return 0;
}
