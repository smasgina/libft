/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semasgin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:10:54 by semasgin          #+#    #+#             */
/*   Updated: 2019/04/29 21:58:27 by semasgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*j;
	const char	*i;

	j = dst;
	i = src;
	while (n-- > 0)
	{
		*j = *i;
		j++;
		i++;
	}
	return (dst);
}
