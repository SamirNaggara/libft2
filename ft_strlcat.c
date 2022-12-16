/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:51:30 by snaggara          #+#    #+#             */
/*   Updated: 2022/12/08 13:35:09 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len;
    size_t i;

    dest_len = ft_strlen(dest);
    if (!src)
        return (dest_len + ft_strlen(src));
    if (size == 0)
        return (ft_strlen(src));
    i = 0;
    while (src[i] && dest_len + i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    if (size <= dest_len)
        dest_len = size;
    return (dest_len + ft_strlen(src));
}