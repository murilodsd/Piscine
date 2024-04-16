/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:59:56 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/30 13:26:36 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>

int main() {
    // Write C code here
    char v_copy[10];
    char v[7] = "Murilo";
    
    ft_strcpy(v_copy,v);
     printf("original %s\n",v);
     printf("copia %s", v_copy);
    return 0;
}*/
