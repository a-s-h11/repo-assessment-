#include <stdio.h>
int main()
{
	char a[50], b;
	int c;
	printf("enter your name: ");
	scanf("%s", &a);
	printf("enter your gender (m/f/o): ");
	scanf("%c", &b);
	printf("enter your age: ");
	scanf("%d", &c);
	if(b == 'm')
	{
		printf("your name is %s, gender male and %d years old", a, c);
	}
	else if(b == 'f')
	{
		printf("your name is %s, gender female and %d years old", a, c);
	}
}

