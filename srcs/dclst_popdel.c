/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclst_popdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:21:30 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/06 11:58:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dclist.h"

void	dclst_popdel(t_dclist *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	dclst_pop(lst);
	dclst_delone(lst, del);
}
