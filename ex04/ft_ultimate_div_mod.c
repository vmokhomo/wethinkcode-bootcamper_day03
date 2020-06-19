#include <unistd.h>

void ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/
void ft_ultimate_div_mod(int *a, int *b)
{
	int diff;

	diff = *a;
	*a = (*a)/(*b);
	*b = (diff)%(*b);

	//ft_putchar(*a + '0');
	//ft_putchar(',');
	//ft_putchar(*b + '0');
}
/*int main()
{
	int a = 2;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
}*/
