/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semasgin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:02:29 by semasgin          #+#    #+#             */
/*   Updated: 2019/04/30 15:02:33 by semasgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	i = 0;
	ptr = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*ptr == *ptr2 && ++i < n)
	{
		ptr++;
		ptr2++;
	}
	return ((int)(*ptr - *ptr2));
}
