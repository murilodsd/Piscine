/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:28:59 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/29 20:26:49 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}
/*#include <stdio.h>
int	main(void)
{
	char b[10] = "Palavra!!!";
	char *str;
	str = &b[0];
	printf("Tamanho da string Palavra!!! eh: %d ", ft_strlen(str));
}*/
