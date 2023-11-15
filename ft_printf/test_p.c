/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:12:04 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/15 21:12:44 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"
#include <libft.h>

void	test_p(void)
{
	int	expected_res;
	int	actual_res;
	char	*p1;
	int		*p2;
	void	**p3;

	p1 = ft_calloc(1, sizeof (char));
	p2 = ft_calloc(1, sizeof (int));
	p3 = ft_calloc(1, sizeof (void));
	if (!p1 || !p2 || !p3)
	{
		ft_putstr_fd("Memory allocation failed during %p tests!", 1);
		ft_free((void **) &p1);
		ft_free((void **) &p2);
		ft_free((void **) &p3);
		return ;
	}
	ft_putstr_fd("\n\n"MAGENTA"%p Tests" DEF_COLOR, 1);
	run_test("Test P 1 Pointer to char", "|%p|", p1);
    run_test("Test P 2 Pointer to int", "|%p|", p2);
    run_test("Test P 3 Pointer to void pointer", "|%p|", p3);
    run_test("Test P 4 Pointer from hex", "|%p|", 0xdeadface);
    run_test("Test P 5 Pointer from small hex", "|%p|", 0xbee);
    run_test("Test P 6 Pointer from ampersand", "|%p|", &expected_res);
    run_test("Test P 7 Pointer to string literal", "|%p|", "string");
    run_test("Test P 8 Pointer from oct", "|%p|", 07461532);
    run_test("Test P 9 Pointer from bin", "|%p|", 0b00101010);
    run_test("Test P 10 Pointer to LLONG_MAX", "|%p|",
			(unsigned long long) 9223372036854775807);
}
