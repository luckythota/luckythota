#include<stdio.h>
void primes_in_a_range(int a,int b)
{
	int i,count=0;
	for(i=2; i<b/2; i++)
	{
		if(a%i==0)
		{
			count++;
		}
		if(count==0)
		{
		  printf("%d",a);	
		}
	}
}
main()
{
		primes_in_a_range(10,22);
}
	
