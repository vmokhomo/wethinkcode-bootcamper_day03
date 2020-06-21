/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:12:36 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/21 10:13:38 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*	#include <unistd.h>
**
**	void ft_putchar(char c)
**	{
**		write(1, &c, 1);
**	}
*/
void ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	ft_putchar(i - '0');
}
/*	int main()
**	{
**		char array[] = {"coding is hard but learnable"};
**		ft_strlen(array);
**	}
*/
