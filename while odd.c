#include<stdio.h>
main()
{
	int i=1,a,b;
	scanf("%d %d",&a,&b);
	while(i<b)
	{
		i++;
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
}
