/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semasgin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 21:45:06 by semasgin          #+#    #+#             */
/*   Updated: 2019/05/04 19:31:26 by semasgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	size_t	mem_space;
	char	*s2;
	char	*res;

	mem_space = ft_strlen(s1) + 1;
	s2 = (char *)malloc(mem_space);
	if (s2 == NULL)
		return (NULL);
	if (!(res = (char *)ft_memcpy(s2, s1, mem_space)))
	{
		free(s2);
		return (NULL);
	}
	return (res);
}
