#include <stdio.h>
int main(void)
{
	int menu, cnt=1, number;
	char munja;

	scanf("%d", &menu);
	getchar();
	if (menu == 1)
	{
		scanf("%d", &number);
		printf("%c\n", number);
	}
	else if (menu == 2)
	{
		scanf("%c", &munja);
		printf("%d\n", munja);
	}
		
	return 0;
}