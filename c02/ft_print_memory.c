/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:04:46 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/12 20:25:23 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* void	print_caracter(char c)
{
	write(1, &c, 1);
}

void	convert(unsigned char *addr)
{
	char *base = "0123456789abcdef";
	unsigned long int	address;
	
	address = (unsigned long int) addr;
	if (address < 16)
		print_caracter(base[address % 16 + '0']);
	else
	{
		convert(address / 16);
		print_caracter(base[address % 16 + '0']);
	}
} */


void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putascii(unsigned char c)
{
	if (c > 31 && c < 127)
		ft_putchar(c);
	else
		ft_putchar('.');
}

void	ft_puthex(unsigned char c)
{
	char tab[16] = "0123456789abcdef";

	ft_putchar(tab[c / 16]);
	ft_putchar(tab[c % 16]);
}

void	print_line(unsigned char *str, size_t start, size_t max)
{
	size_t i;

	i = start;
	while (i < start + 16 && i < max)
	{
		ft_puthex(str[i]);
		if (i % 2)
			ft_putchar(' ');
		i++;
	}
	while ( i < start + 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (i % 2)
			ft_putchar(' ');
		i++;
	}

	i = start;
	while(i < start + 16 && i < max)
	{
		ft_putascii(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	print_memory(const void *addr, size_t size)
{
	unsigned char *str;
	size_t	c;

	str = (unsigned char *)addr;
	c = 0;

	while (c < size)
	{
		print_line(str, c, size);
		c += 16;
	}
}


int	main(int argc, char **argv)
{
/* 	(void)argc;
	(void)argv;
	void *p;
	size_t 			j;
	unsigned char	*p;
	const void *addr;
	char 			*str;

	str = "0123456789abcdef";
	p = (unsigned char *)addr;
	printf("%p", addr);
	printf("%d", p); */
const void *addr;
printf("%p\n", addr); 
print_memory(addr, 128);

}