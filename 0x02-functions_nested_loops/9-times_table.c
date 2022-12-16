#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{

int a = 0;
int b;
int rep;

while (a <= 9)
{
	b = 0;
	while (b <= 0)
	{
		rep = a * b;
		if (b == 0)
		{
			_putchar('0' + rep);
		}
		else if (rep < 10)
		{
			_putchar(' ')
			_putchar('a' + rep);
		}
		else
		{
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}

		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		b++;
	}
	putchar('\n');
	a++;
}

}
