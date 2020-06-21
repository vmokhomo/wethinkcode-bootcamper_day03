/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:09:22 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/21 10:09:29 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* #include <unistd.h>
**
**	void ft_putchar(char c);
**	{
**		write(1, &c, 1);
**	}
*/
void ft_ultimate_div_mod(int *a, int *b)
{
	int diff;

	diff = *a;
	*a = (*a)/(*b);
	*b = (diff)%(*b);
}
/*	int main()
**	{
**		int a = 2;
**		int b = 3;
**
**		ft_ultimate_div_mod(&a, &b);
**	}
*/
