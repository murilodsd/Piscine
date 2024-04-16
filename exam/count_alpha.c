/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:20:10 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/14 15:50:44 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    ft_lowcase(char c)
{
        if (c >= 'A' && c <= 'Z')
                return (c + 32);
        return (c);
}

int     is_alpha(char c)
{
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                return (1);
        return (0);
}

int     main(int argc, char ** argv)
{
        int     tab[256] = {0};
        int     i;
        char     current_alpha;
        char     next_alpha;

        i = 0;
        while (argv[1][i])
        {
                if (is_alpha(argv[1][i]) == 1)
                {
                        current_alpha = ft_lowcase(argv[1][i]);
                        next_alpha = ft_lowcase(argv[1][i + 1]);
                        if (current_alpha == next_alpha)
                        {
                                tab[current_alpha - '0']++;
                                i++;
                        }
                        else 
                        {
                                tab[current_alpha - '0']++;
                                printf("%d", tab[current_alpha - '0']);
                                printf("%c", current_alpha);
                                tab[current_alpha - '0'] = 0;
                                i++;
                                while (is_alpha(argv[1][i]) == 0 && argv[1][i] != '\0')
                                        i++;
                                if (argv[1][i] != '\0')
                                        printf("%s", ", ");
                        }
                }
                else
                        i++;
        }
       printf("%s", "\n"); 
}
