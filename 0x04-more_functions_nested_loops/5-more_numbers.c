#include "main.h"
/**
 * more_numbers - print 0-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	/*iterator variables*/
	int i;
	int j;

	/*number printed*/
	int num = '0';

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			/**reset number printed**/
			if (j == 10)
				num = '0';

			/**input 1 before number printed**/
			if (j > 9)
				_putchar('1');


			_putchar(num);
			num++;
		}

		_putchar('\n');
		num = '0';
	}

}
