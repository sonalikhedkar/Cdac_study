#include <iostream>
using namespace std;
#include<string.h>
//default copy constructor
//default destructor
class Demo{
  int a;
  public:
  Demo(){
    a=20;
  }
  void display();
  //compiler destruct the object automatically when the object out of scope 
  ~Demo(){
    cout<<"Destructor is called"<<endl;
  }

};
void Demo::display(){
  cout<<a<<endl;
}
int main(){
     Demo d1;
     d1.display();
     Demo d2(d1);//compiler gives its copy constructor
     d2.display();
    return 0;
}
/*
20 ->d1
20 ->d2
Destructor is called 
Destructor is called
*/
