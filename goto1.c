#include<stdio.h>
int main()
{
	int m,n,ch;
	x:
		printf("enter any num:\n");
		scanf("%d, &m\n");
		printf("enter any num:\n");
		scanf("%d, &n\n");
		printf("enter any num:\n");
		printf("press 1 to continue and 0 to exit\n");
	    scanf("%d,&ch\n");
		if(ch==1)
		goto x;
			printf("thank you!\n");
			return 0;
}

