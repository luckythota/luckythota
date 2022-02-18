#include<stdio.h>
main()
{
	int i,n;
	scanf("%d",&i);
	for(n=1; i>=n; n++)
	{
		if(i%n==0)
		{
	      printf("%d ",n);
		}
	}
}

	
