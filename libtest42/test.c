/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:18:18 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/10 21:44:44 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	compare(void *expected, void *actual, int nbytes)
{
	int	i;

	i = 0;
	while (i++ < nbytes)
	{
		if (*(char *) expected++ != *(char *)actual++)
		{
			ft_putstr_fd(RED" FAILED"DEF_COLOR"\n", 1);
			return (0);
		}
	}
	ft_putstr_fd(GREEN" PASSED"DEF_COLOR"\n", 1);
	return (1);
}
