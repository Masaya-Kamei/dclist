/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclst_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:44:28 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/04 16:47:30 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dclist.h"

size_t	dclst_size(t_dclist *lst)
{
	const t_dclist *sentinel = lst;
	size_t			size;

	size = 0;
	lst = lst->next;
	while (lst != sentinel)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
