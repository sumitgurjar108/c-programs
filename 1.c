#include<stdio.h>
int main()
{
	int i,n;
	i=1;
	printf("enter a tables:\n");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
	return 0;
}
