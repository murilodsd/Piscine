/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:07:14 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/01 12:20:39 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compara duas strings para mostrar qual eh "menor"(ordem alfabetica)
//retorna negativo se a primeira for menor
//retorna 0 se iguais
//retorna 1 se primeira maior

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{	
	char s1[] = "paoz";
	char s2[] = "pao";
	printf("Palavras enviadas %s e %s, resultado: %d ",s1,s2,ft_strcmp(s1,s2));
}*/
