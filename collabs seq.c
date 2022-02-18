#include<stdio.h>
void main()
{
	int n,i,a,b,res,max=0,count;
	scanf("%d%d",&a,&b);
	for(i=a; i<=b; i++)
	{
	  count=col(i);
	  if(count>max)
	  {
	  	
	  	max=count;
	  	res=i;
	  }
    }
    printf("%d",res);
}
int col(long long int n)
{
	 int count=1;
	while(n>2)
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=3*n+1;
		}
		count=count+1;
	}
	return count;
	return 0;
    
}
