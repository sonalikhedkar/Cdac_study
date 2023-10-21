#include<iostream>
using namespace std;

class Date  						// Contenment class
{
	int dd, mm, yy;
	public:
				
	void get()
	{
		cout<<"Enter the date of birth"<<endl;
		cin>>dd>>mm>>yy;
	}
		void display()
		{
			cout<<"Date of birth of student is: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		
};

class Student										//Container class
{
	char name[20];
	int rollno, totalmarks;
	Date DOB; 					//obj of date 
	public:
	
		void get()
		{
			cout<<"Enter the name"<<endl;
			cin>>name;
			cout<<"Enter the rollno "<<endl;
			cin>>rollno;
			cout<<"Enter total marks"<<endl;
			cin>>totalmarks;
			DOB.get();
		}
			int getrollno(){
				return rollno;
		}
		void display()
		{
			cout<<"Name of student is: "<<name<<endl;
			cout<<"Roll no of student is: "<<rollno<<endl;
			cout<<"Total marks of student is: "<<totalmarks<<endl;
			DOB.display();
		}
};

int main(){
	int n;
	cout<<"Enter no of student: ";
	cin>>n;
	Student arr[n],temp;
	for(int i=0;i<n;i++){
		arr[i].get();
	}
	for(int i=0;i<n;i++){
		arr[i].display();
	}
	cout<<"sort information\n";
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i].getrollno()>arr[j].getrollno())
			{
			    temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
	}
	for(int i=0;i<n;i++)
	arr[i].display();
}
