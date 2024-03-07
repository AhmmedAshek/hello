#include <stdio.h>
#include <string.h>

char* flipAString(char*, int);

int main()
{
	char name[20];
	printf("Enter your name:");
	scanf("%s", &name);
	printf("Welcome %s!\n", name);
	printf("Your name contains %d letters.\n", strlen(name));
	printf("Flipping your name produces: %s.\n",flipAString(name, strlen(name)));
	return 0;
}

char* flipAString(char* name, int length)
{
	int i;
	for(i = 0; i<(length/2); i++)
		{
			//printf("%c\n", *(name+i));
			//swap(name[i],name[length-1-i]);
			char tmp = name[length-1-i];
			name[length-1-i] = name[i];
			name[i] = tmp;
		}
			
	return name;
}