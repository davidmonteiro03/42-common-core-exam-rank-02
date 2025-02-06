/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:24:37 by dcaetano          #+#    #+#             */
/*   Updated: 2024/09/12 21:07:35 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

void	ft_print(char c, int step)
{
	while (step--)
	{
		c++;
		if (!ft_isalpha(c))
			c -= 26;
	}
	ft_putchar(c);
}

void	rotate(char *str, int step)
{
	while (*str)
	{
		if (ft_isalpha(*str))
			ft_print(*str, step);
		else
			ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotate(argv[1], 1);
	ft_putchar('\n');
	return (0);
}
