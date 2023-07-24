#include<stdio.h>
main()
{
	char s[15];
	int i=0;
	printf("Enter the string:");
	gets(s);
	while(s[i]!='\0')
	{
		if (s[i]=='a')
			s[i]='b';
		i++;
	}
	printf("Updated string is %s\t",s);
}
