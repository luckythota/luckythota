#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,se,mid,low,high,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==se)
		{
			flag=1;
			break;
		}
		if(a[mid]<se)
		{
			low=mid+1;
		}
		else if(a[mid]>se)
		{
			high=mid-1;
		}
    }
    if(flag==1)
    {
    	printf("element found");
	}
	else
	{
		printf("element not found");
	}
} 
