#include <iostream>
#include <fstream>
using namespace std;
// Class to define the properties
class Employee {
public:
   const char* Name;
   int Employee_ID;
   int Salary;
};
int main(){
   Employee Emp_1;
   Emp_1.Name="Vishal";
   Emp_1.Employee_ID=2121;
   Emp_1.Salary=11000;
   //Wriring this data to Employee.txt
   ofstream file1;
   file1.open("abc.txt", ios::app);
   file1.write((char*)&Emp_1,sizeof(Emp_1));
   file1.close();
   //Reading data from Employee.txt
   ifstream file2;
   file2.open("abc.txt",ios::in);
   file2.read((char*)&Emp_1,sizeof(Emp_1));
  cout<<"name is: "<<Emp_1.Name<<endl;
   cout<<"id is: "<<Emp_1.Employee_ID<<endl;
   cout<<"salary: "<<Emp_1.Salary<<endl;
   file2.close();
   return 0;
}
