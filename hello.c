#include <stdio.h>

int main()
{
	char name[20];
	printf("Enter your name:");
	scanf("%s", &name);
	printf("Welcome %s!\n", name);
	printf("Your name contains %d letters.\n", strlen(name));
	return 0;
}