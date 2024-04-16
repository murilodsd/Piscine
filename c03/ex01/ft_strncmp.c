/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:38:09 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/01 12:19:56 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compara o n primeiras letras da string
//retorna negativo se a primeira for menor
//retorna 0 se iguais
//retorna 1 se primeira maior

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
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
	char s1[] = "paozinho";
	char s2[] = "pao";
	int	n = 4;
	printf("Palavras enviadas %s e %s, resultado: %d ",s1,s2,ft_strncmp(s1,s2,n));
}*/
