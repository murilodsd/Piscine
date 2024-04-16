/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:54:00 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/10 19:57:06 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

void	print_caracter(int remainder, char *base)
{
	write(1, &base[remainder], 1);
}

void	convert(long nbr, char *base)
{
	int	length;

	length = ft_strlen(base);
	if (nbr < length)
		print_caracter(nbr % length, base);
	else
	{
		convert(nbr / length, base);
		convert(nbr % length, base);
	}
}

int	check_base(char *base)
{
	int	length;
	int	i;
	int	j;

	i = 0;
	length = ft_strlen(base);
	if (length < 2)
		return (0);
	while (i < length)
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	l_nbr;

	l_nbr = nbr;
	if (check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		l_nbr = -l_nbr;
	}
	convert(l_nbr, base);
}
/* #include <stdlib.h>
int	main(int argc, char **argv)
 {
	(void) argc;
     	ft_putnbr_base(atoi(argv[1]), argv[2]);
 } */