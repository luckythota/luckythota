#include<stdio.h>
main()
{
	int rs,cs;
	scanf("%d%d",&rs,&cs);
	int mat1[rs][cs],mat2[rs][cs],i,j;
	    for(i=0; i<rs; i++)
	    {
		     for(j=0; j<cs; j++)
		    {
			   scanf("%d",&mat1[i][j]);
		    }
	    }
        for(i=0; i<rs; i++)
    	{
		  for(j=0; j<cs; j++)
		   {
			  scanf("%d",&mat2[i][j]);
		   }
	    }
	   int  sum[i][j],differ[i][j],res[i][j];

	    for(i=0;i<rs;i++)
	    {
	    	for(j=0;j<cs;j++)
	    	{
	    		sum[i][j]=mat1[i][j]+mat2[i][j];
			}
		}
		for(i=0;i<rs;i++)
		{
			for(j=0;j<cs;j++)
			{
				differ[i][j]=mat1[i][j]-mat2[i][j];
			}
		}
		for(i=0;i<rs;i++)
		{
			for(j=0;j<cs;j++)
			{
				res[i][j]=sum[i][j]+differ[i][j];
			}
		}
		for(i=0;i<rs;i++)
		{
			for(j=0;j<cs;j++)
			{
				printf("%d\n",res[i][j]);
			}
		}
	    
	
}
