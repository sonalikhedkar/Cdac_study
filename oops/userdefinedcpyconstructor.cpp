#include <iostream>
using namespace std;
#include<string.h>
//User defined copy constructor for customized output
class Date{
  int dd,mm,yy;
  public:
    Date(int, int, int);
    Date(Date&);
    void display();

};
Date::Date(int d=02, int m=01, int y=2002){
   dd=d;
   mm=m;
   yy=y;
}
Date::Date(Date &p){
   this->dd=p.dd;
   this->mm=p.mm;
   this->yy=2025;//customization
}
void Date::display(){
  cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main(){
    Date d1(4,12,2023);
    d1.display();
    Date d2(d1);
    d2.display();
    return 0;
}
/*
4/12/2023
4/12/2025
*/
