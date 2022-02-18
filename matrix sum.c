#include<stdio.h>
main()
{
	int rs,cs;
	scanf("%d%d",&rs,&cs);
	int a1[rs][cs],a2[rs][cs],res[rs][cs],i,j;
	for(i=0; i<rs; i++)
	{
		for(j=0; j<cs; j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	for(i=0; i<rs; i++)
	{
		for(j=0; j<cs; j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0; i<rs; i++)
	{
		for(j=0; j<cs; j++)
		{
			res[i][j]=a1[i][j]+a2[i][j];
		}
   }
   for(i=0; i<rs; i++)
   {
   	  for(j=0;j<cs;j++)
   	  {
   	  	printf("%d",res[i][j]);
	  }
   }
	
}
