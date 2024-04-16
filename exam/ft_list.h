/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:51:09 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/13 19:53:13 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST.H
# define FT_LIST.H

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif