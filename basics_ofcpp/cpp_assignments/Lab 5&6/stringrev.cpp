#include<stdio.h>
using namespace std;
//#include<string.h>
void ustrrev(char*,char*);
int strlen(char*);
int main()
{
	char a [20],b[20];
	printf("enter the name:");
	scanf("%s",a);
	ustrrev(a,b);
	printf("\nreverse string is :%s",b);
	return 0;
}
int strlen(char*p){
	int len=0;
	while(*p!='\0'){
		len++;
		p++;
	}
	return len;
}
void ustrrev(char*p,char*q)
{
	int y=0;
	//
	
	int x= strlen(p)-1;
	
	while(x>=0){
		q[y]=p[x];
		x--;
		y++;
	}
	
	q[y]='\0';
	
}
