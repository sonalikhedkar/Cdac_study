#include<iostream>
using namespace std;
int main()
{
	int i=0, count=0;
	while(i<=999)
	{
		int num=i;
		int res=0;
		while(num!= 0)
		{
			int rem=num%10;
			res=res+rem*rem*rem;
			num=num/10;
		}
		if(res==i)
		{
		cout<<"Num is armstrong number"<<i<<endl;
		count++;
		}
	i++;
	}
	cout<<count;
	return 0;
}

