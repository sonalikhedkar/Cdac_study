#include <iostream>
using namespace std;

class test{
    int a;//data member /attribute
    public:
    void get();//declare class member function
    test add(test &p){//declaration and defn inside class
       test t3;//creating object inside class//object can creat anywhere
       t3.a= this->a+p.a;// this points to t1 and p to t2
       return t3;//return type is test because we return obj
    }
     void show(){
        cout<<"value is "<<a<<endl;
     }
    
};
 void test::get()//defination of member function outside class
 {
    cout<<"enter value "<<endl;
    cin>>this->a;
 }

int main(){
    test t1;//object 1
    test t2;//object 2
    t1.get();
    t2.get(); 
   test t4 = t1.add(t2);//add call for t1 so this pointer contains the address of t1
    //and t2 are passed with reference
    t4.show();


    return 0;
}
