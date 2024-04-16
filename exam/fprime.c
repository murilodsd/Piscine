/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:06:04 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/13 18:38:07 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nbr)
{
        int     i;

	i = 2;
        while (i < ((nbr / i) + 1))
	{
                if (nbr % i == 0)
                        return (0);
		i++;
	}
	return (1);
}

int     ft_next_prime(int nbr)
{
        while (ft_is_prime(nbr) != 1)
	{
		nbr++;
	}
	return (nbr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	lnbr;

	lnbr = nbr;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	if (lnbr < 10)
		ft_putchar(lnbr + '0');
	else
	{
		ft_putnbr(lnbr / 10);
		ft_putchar(lnbr % 10 + '0');
	}
}

void	fprime(int nbr)
{
	int prime = 2;

	while (nbr > 1)
	{
		while (nbr % prime == 0)
		{
			ft_putnbr(prime);
			nbr /= prime;
			if (nbr != 1)
				ft_putchar('*');
		}
	prime = ft_next_prime(prime + 1);
	}
}