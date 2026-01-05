#include<stdio.h>
void hanoi(int n,char s,char i,char d)
{
	
	if(n==1)
	{
		printf("move disc %d from %c to %c\n",1,s,d);
	    return;
	}
	hanoi(n-1,s,d,i);
	printf("Move disc %d from %c to %c\n",n,s,d);
	hanoi(n-1,i,s,d);
	
	
		
	
}
int main()
{
	printf("Enter the the number\n");
	int n;
	char a,b,c;
	a= 's';
	b= 'i';
	c= 'd';
	
	scanf("%d",&n);
	hanoi(n,a,b,c);
}