#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(){
			real=0;
			img=0;
		}
		complex(int,int);
		void show();
		complex& operator+(complex& );//complex& operator-(complex& );
		complex& operator++(int);//post increment operator /dummy parameter
		complex& operator++();//pre increment operator
};
complex::complex(int r,int i){
	real=r;
	img=i;
}
void complex::show(){
	cout<<real<<"+"<<img<<"i"<<endl;
}
complex& complex::operator+(complex& obj){
	this->real=this->real+obj.real;//this->real-obj.real
	this->img=this->img+obj.img;//this->img-obj.img;
	return (*this);
}
complex& complex::operator++(int){
	complex temp=*this;
	this->real=this->real++;//this->real-obj.real
	this->img=this->img++;//this->img-obj.img;
	return temp;
}
complex& complex::operator++(){
	this->real=this->real+1;//this->real-obj.real
	this->img=this->img+1;//this->img-obj.img;
	return (*this);
}
int main(){
	complex c1(2,3);
	c1.show();
	complex c2=c1;//left hand side obj newely created then default copy constructor
	c1=c2;
	c1.show();
	c2.show();
	complex c3=c1+c2;//c1.operator+(c2)//c1.opeartor-(c2)
	c3.show();
	complex c4=c3++;//c3.operator++(0)
	c4.show();
	complex c5=++c4;//c4.operator++()
	c5.show();
	c1=c5;   //assignment operator invoked by default
	c1.show();
}
