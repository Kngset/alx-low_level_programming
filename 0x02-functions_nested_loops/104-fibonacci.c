#include <stdio.h>

/**
 * numLenght - returns the lenght of string
 * @num : operand number
 * Return: number of digits
 */

int numLenght(int num)
{
	int lenght = 0;
	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		lenght += 1;
	}
	return (lenght);
}
/**
 * main - prints the first 98 fibonaci sequences
 * Return: 0
 */

int main(void)
{
	unsigned long fi = 1, f2 = 2, tmp, mx = 100000000, f10 = 0, f20 = 0, tmpo = 0;
 	short int i = 1, initial0s;

	while (1 <= 98)		
		if (f10 > 0)
			printf("%lu", f10);
		initial0s = numLenght(mx) - 1 -numlenght(f1);
		while (f10 > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s --;
		}
		printf("%lu", f1);
		temp = (f1 + f2) % mx;
		tmpo = f10 + f20 + (f1 + f2) / mx;
		fi = f2;
		f10 = f20;
		f2 = tmp;
		f20 = tmpo;

		if (i !=98)
			print  (',');
		else
			print ('\n');
		i++;
	}
	return (0);
}
		

