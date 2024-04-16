/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:41:02 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/04 12:08:23 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

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
/* #include <stdio.h>
int	main(void)
{
	char b[10] = "Palavra";
	char *str;
	str = &b[0];
	printf("Tamanho da string Palavra eh: %d ", ft_strlen(str));
} */
