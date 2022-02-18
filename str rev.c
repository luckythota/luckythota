#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	scanf("%[^\n]s",str);
	strrev(str);
	printf("%s",str);
}
