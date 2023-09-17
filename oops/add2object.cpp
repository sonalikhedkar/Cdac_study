#include <iostream>
using namespace std;

class Complex{
    int real;//data member /attributes
    int img ;
    public:
    void get();
    Complex add(Complex &p){
        Complex temp;
        temp.real =this->real+p.real;
        temp.img =this->img+p.img;
        return temp;
    }
    
     void show(){
        cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
     }
    
};
 void Complex::get()//defination of member function outside class
 {
    cout<<"enter real and img "<<endl;
    cin>>this->real;
    cin>>this->img;
 }

int main(){
    Complex c1;//object 1
    Complex c2;//object 2
    c1.get();
    c2.get(); 
    Complex c3 = c1.add(c2);//add call for t1 so this pointer contains the address of t1
    //and t2 are passed with reference
    c3.show();


    return 0;
}
