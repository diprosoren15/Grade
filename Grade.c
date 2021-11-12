#include<stdio.h>
main()
{
	int m=0;
	printf("Enter marks:");
	scanf("%d",&m);
	if(m>85 && m<=100)
	{
		printf("Grade A");
	}
	else if(m>84 && m<=70)
	{
		printf("Grade B");
	}
	else if(m>69 && m<=55)
	{
		printf("Grade C");
	}
	else if(m>54 && m<=40)
	{
		printf("Grade D");
	}
	else if(m<40)
	{
		printf("Grade F");
	}
}
