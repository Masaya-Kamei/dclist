/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclst_pop_del.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:21:30 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/05 10:27:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dclist.h"

void	dclst_pop_del(t_dclist *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	dclst_pop(lst);
	dclst_delone(lst, del);
}
