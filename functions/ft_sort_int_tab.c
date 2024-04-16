/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:44:41 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/29 17:34:30 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	copy;
	int	count;
	int	i;

	count = 0;
	while (count < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				copy = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = copy;
			}
			i++;
		}
		count++;
	}
}
/*#include <stdio.h>

int main() {
    // Write C code here
    int *ptr;
    int v[6] = {7,2,8,4,5,6};
    ptr = &v[0];
    ft_sort_int_tab(ptr,6);
    for(int a = 0; a < 6; a++)
    {
        printf("%d\n",v[a]);
    }

    return 0;
}*/
