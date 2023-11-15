/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:12:04 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/15 20:52:51 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"

void	test_u(void)
{
	int	expected_res;
	int	actual_res;

	ft_putstr_fd("\n\n"MAGENTA"%u Tests" DEF_COLOR, 1);
	run_test("Test U 1 Number Normal", "|%u|", 42);
    run_test("Test U 2 Number Negative", "|%u|", -64);
    run_test("Test U 3 Number 0", "|%u|", 0);
    run_test("Test U 4 Number INT_MAX", "|%u|", 2147483647);
    run_test("Test U 5 Number INT_MAX+1", "|%u|", 2147483648);
    run_test("Test U 6 Number as hex", "|%u|", 0xdeadface);
    run_test("Test U 7 Number as bin", "|%u|", 0b101010);
    run_test("Test U 8 Number UINT_MAX", "|%u|", 4294967295);
    run_test("Test U 9 Number LONG_MAX", "|%u|", 2147483647);
    run_test("Test U 10 Passing a char", "|%u|", '#');
}
