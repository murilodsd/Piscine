/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:55:56 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/09 17:04:49 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Troca os caracteres nao imprimives por seu caracter hexadecimal

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}
/*#include <stdio.h>

int main() {
	char naoimprimivel[] = "Ola\n tudo bem";
	ft_putstr_non_printable(naoimprimivel);
	return 0;
}*/
