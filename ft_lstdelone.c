/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semasgin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 16:46:20 by semasgin          #+#    #+#             */
/*   Updated: 2019/05/04 16:46:26 by semasgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void				ft_lstdelone(t_list **list, void (*del)(void *, size_t))
{
	del((*list)->content, (*list)->content_size);
	free(*list);
	*list = NULL;
}
