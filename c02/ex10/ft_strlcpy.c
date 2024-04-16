/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:17:58 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/06 20:50:18 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Retorna o tamanho da string a ser copiada
//Cuidado com a comparacao com o size no caso de size igual a 0
//Se o estiver i < size - 1, vai dar pau pois ele eh unsigned

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < size )
	{
		dest[i] = *(src + i);
		i++;
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main() {
    // Write C code here
    char v_copy[5];
    char v[7] = "Murilo";
    int length;

     length = ft_strlcpy(v_copy,v,5);
     printf("original %s\n",v);
     printf("copia %s\n",v_copy);
     printf("retorno da funcao ");
     printf("%d",length);
    return 0;
}*/
