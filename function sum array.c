#include<stdio.h>
int array_element_sum(int a[],int size)
{
    int sum=0;
	int i;
	for(i=0; i<size; i++)
	{
		sum+=a[i];
	}
	return sum;	
	
}
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
   int 	res=array_element_sum(arr,n);
	printf("%d",res);
}
