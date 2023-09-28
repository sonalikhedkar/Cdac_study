#include<iostream>
using namespace std;
class shape
{
	public:
		virtual int area() = 0;
};
class square:public shape
{
	int side;
	public:
		
		square (int s)
		{
			side=s;
			cout<<"In par of square\n";
		}
		int area ()
		{
			return side*side;	
		}
		void display()
		{
			cout<<"Area of Square is "<<area()<<endl;
		}
};
class rectangle: public shape
{
	int len, bre;
	public:
		
		rectangle(int l, int b)
		{
			len=l;
			bre=b;
			cout<<"In par of rectangle\n";
		}
		int area ()
		{
			return len*bre;	
		}
		void display()
		{
			cout<<"Area of Rectangle is "<<area()<<endl;
		}
};

int main()
{
	rectangle r1(10,20);
	r1.area();
	r1.display();
	square s1(30);
	s1.area();
	s1.display();
}
