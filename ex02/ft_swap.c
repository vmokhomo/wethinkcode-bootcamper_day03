#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_swap(int *a, int *b)
{
	int dif;

	dif = *a;
	*a = *b;
	*b = dif;

	ft_putchar(*a + '0');
	ft_putchar(*b + '0');
}
int main()
{
	int a = 5;
	int b = 6;
	ft_swap(&a, &b);
}
