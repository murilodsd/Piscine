/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:18:08 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/29 17:31:33 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	copy;
	int	count;

	count = 0;
	while (count <= size / 2 - 1)
	{
		copy = *(tab + count);
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = copy;
		count++;
	}
}
/*#include <stdio.h>
int main() {
    // Write C code here
    int *ptr;
    int v[8] = {1,2,3,4,5,6,7,8};
    ptr = v;
    ft_rev_int_tab(ptr,8);
    for(int i =0; i < 8; i++)
    {
        printf("%d",v[i]);
    }
    return 0;
}*/
