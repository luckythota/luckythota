#include<stdio.h>
main()
{
	char s1[100];
	char s2[100];
	scanf("%[^\n]s",s1);
	scanf(" %[^\n]s",s2);
	int i,j,len=0;
	for(i=0; s1[i]!='\0'; i++)
	{
		len++;
	}
	j=len;
	for(i=0; s2[i]!='\0'; i++)
	{
		s1[j]=s2[i];
		j++;
	}
	s2[j]='\0';
	printf("%s",s1);
}
