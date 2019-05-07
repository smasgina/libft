/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semasgin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 19:30:34 by semasgin          #+#    #+#             */
/*   Updated: 2019/05/04 19:04:07 by semasgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	finish;

	if (!s)
		return (NULL);
	start = 0;
	while (ft_isstrwhitespace(s[start]))
		start++;
	finish = ft_strlen(s);
	while (ft_isstrwhitespace(s[finish - 1]))
		finish--;
	if (finish < start)
		finish = start;
	return (ft_strsub(s, start, finish - start));
}
