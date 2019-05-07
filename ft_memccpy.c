/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semasgin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 16:41:13 by semasgin          #+#    #+#             */
/*   Updated: 2019/04/29 21:57:14 by semasgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *j;
	unsigned char *i;

	i = (unsigned char*)src;
	j = (unsigned char*)dst;
	while (n-- > 0)
	{
		*j = *i;
		if (*i == (unsigned char)c)
			return (j + 1);
		i++;
		j++;
	}
	return (NULL);
}
