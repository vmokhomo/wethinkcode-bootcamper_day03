/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:10:19 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/21 10:11:39 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* #include <unistd.h>
**
**	void ft_putchar(char c)
**	{
**		write(1, &c, 1);
**	}
*/
void ft_putstr(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
/* int main()
**	{
**		char array[] = {"Learning to code."};
**		ft_putstr(array);
**	}
*/
