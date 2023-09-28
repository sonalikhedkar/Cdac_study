#include <iostream>
using namespace std;
#include<string.h>
//default arguments constructor
class Date{
  int dd,mm,yy;
  public:
    Date(int, int, int);
    void display();

};
Date::Date(int d=02, int m=01, int y=2002){
   dd=d;
   mm=m;
   yy=y;
}
void Date::display(){
  cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main(){
    Date d1;
    d1.display();
    Date d2(3);
    d2.display();
    Date d3(5,10);
    d3.display();
    Date d4(4,12,2023);
    d4.display();
    return 0;
}
/*
2/1/2002
3/1/2002
5/10/2002
4/12/2023
*/
