#include<stdio.h>
int main()
{
	int x,y,z;
	x=10;
	y=20;
	z-80;
	
	printf("entered num a b c");
	scanf("%d %d %d",&x, &y ,&z);
	if (x>=y&& x>=z)
	{
		printf("%d is max\n",x);
		
	}
	if(y>=x && y>=z)
	{    
	printf("%d is max",y);
    }
    if(z>=x && z>=y)
    {
    	printf("%d is max",z);
	}
	return 0;
    
	
	
}
