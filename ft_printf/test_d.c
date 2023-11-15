/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:12:04 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/15 20:52:24 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"

void	test_d(void)
{
	int	expected_res;
	int	actual_res;

	ft_putstr_fd("\n\n"MAGENTA"%d Tests" DEF_COLOR, 1);
	run_test("Test D 1 Number Normal", "|%d|", 42);
    run_test("Test D 2 Number Negative", "|%d|", -64);
    run_test("Test D 3 Number 0", "|%d|", 0);
    run_test("Test D 4 Number INT_MAX", "|%d|", 2147483647);
    run_test("Test D 5 Number INT_MAX+1", "|%d|", 2147483648);
    run_test("Test D 6 Number INT_MIN", "|%d|", -2147483648);
    run_test("Test D 7 Number INT_MIN-1", "|%d|", -2147483649);
    run_test("Test D 8 Number as hex", "|%d|", 0xdeadface);
    run_test("Test D 9 Number as bin", "|%d|", 0b101010);
    run_test("Test D 10 Number UINT_MAX", "|%d|", 4294967295);
    run_test("Test D 11 Number LONG_MAX", "|%d|", 2147483647);
    run_test("Test D 12 Passing a char", "|%d|", '#');
}
