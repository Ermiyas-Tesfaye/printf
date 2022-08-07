#include "main.h"
#include <stdio.h>
int main(void)
{
	char *str = "He";
	int i = _printf("Hi%s\n", str);
	_printf("%d\n", i);
	int j = printf("hi%s\n", str);
	printf("%d\n", j);
	return (0);
}
