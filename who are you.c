#include <stdio.h>
#include <string.h>

int main(void)
{
	char myname[] = "Sam";
	char name[10];
	scanf("%s", &name);

	if (strcmp(myname, name) == 0)
		printf("Hello Sam!");
	else
		printf("Who are you?");

	return 0;
}