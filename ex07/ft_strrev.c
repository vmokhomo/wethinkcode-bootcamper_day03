/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:14:40 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/21 10:16:00 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* #include <unistd.h>
**
**	void ft_putchar(char c)
**	{
**		write(1, &c, 1);
**	}
*/
char *ft_strrev(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	while(i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	return(0);
}

/*	int main()
**	{
**		char array[] = {"code edoc"};
**		ft_strrev(array);
**
**		return(0);
**	}
*/
