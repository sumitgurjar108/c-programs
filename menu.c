#include<stdio.h>
int main()
{
	int ch; float kg,gm;
	printf("menu\n");
	printf("enter 1 to gm to kg\n");
	printf("enter 2 to kg to gm\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("enter value in gm\n");
		scanf("%f",&gm);
		kg=gm/1000;
		gm= kg*1000;
		//printf("gram = "%0.2f", gm);
		scanf("%f",&gm);
		return 0;
	}
	}
	
