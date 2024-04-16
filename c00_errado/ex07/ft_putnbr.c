/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:29:48 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/04 12:31:13 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	potencia10(int n)
{
	int	pot;

	if (n == 0)
		return (1);
	pot = 10;
	while (n > 1)
	{
		pot = pot * 10;
		n--;
	}
	return (pot);
}

void	ft_putnbr(int nb)
{
	int	casas;
	int	copy_nb;
	int	digito;

	casas = 1;
	copy_nb = nb;
	while (copy_nb >= 10 || copy_nb <= -10)
	{
		copy_nb = copy_nb / 10;
		casas++;
	}
	if (nb < 0)
		ft_putchar('-');
	while (casas > 0)
	{
		digito = (nb / potencia10(casas - 1)) % 10;
		if (digito < 0)
			digito = digito * (-1);
		ft_putchar(digito + '0');
		casas--;
	}
}
/* #include <stdio.h>
int	main(void)
	{
		printf("TESTE PARA 1\n");
		ft_putnbr(1);
		printf("\nTESTE PARA 123\n");
		ft_putnbr(123);
		printf("\nTESTE PARA -15465\n");
		ft_putnbr(-15465);
		printf("\nTESTE PARA -2147483648\n");
		ft_putnbr(-2147483648);
		printf("\nTESTE PARA 2147483647\n");
		ft_putnbr(2147483647);
		printf("\nTESTE PARA 0\n");
		ft_putnbr(0);
	} */
