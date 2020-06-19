#include <unistd.h>

void ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;

	ft_putchar(*div + '0');
	ft_putchar(*mod + '0');
}
/*int main()
{
	int a = 2;
	int b = 3;
	int c = 0;
	int d = 0;

	ft_div_mod(a, b, &c, &d);
}*/
