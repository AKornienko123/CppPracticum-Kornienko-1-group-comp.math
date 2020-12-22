#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "asddf;23q";
	char b[10] = "asddf;23q";
	char c[10] = "a;ddf;23q";
	bool T = false, F = false;
	int k = 0;
	for (int i = 0; i < 10; i++) // вариант а
	{
		if (a[i] == ';' )
		{
			break;
		}
		printf("%c", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) // вариант б
	{
		if (b[i-1] == ';')
		{
			T = true;
		}
		if (T == true) {
			printf("%c", b[i]);
		}
	}
	printf("\n");
	for (int i = 0; i < 10; i++) // вариант в
	{
		if (c[i - 1] == ';')
		{
			F = true;
		}
		
		if (c[i] == ';' && F == true)
		{
			break;
		}
		if (F == true) {
			printf("%c", c[i]);
		}
	}
	return 0;
}