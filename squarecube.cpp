#include<stdio.h>
int main()
{
	int i;
	printf("n\tsquare\tcube\n");
	
	for(i=1;i<=10;i++)
	{
		printf("%d\t%d\t%d\n",i,i*i,i*i*i);
	}
	return 0;
}
