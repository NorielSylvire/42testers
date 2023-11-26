/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:12:04 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/25 21:33:32 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"

void	test_i(void)
{
	int	expected_res;
	int	actual_res;

	ft_putstr_fd("\n\n"MAGENTA"%i Tests" DEF_COLOR, 1);
	run_test("Test I 1 Number Normal", "|%i|", 42);
	run_test("Test I 2 Number Negative", "|%i|", -64);
	run_test("Test I 3 Number 0", "|%i|", 0);
	run_test("Test I 4 Number INT_MAX", "|%i|", 2147483647);
	run_test("Test I 5 Number INT_MAX+1", "|%i|", 2147483648);
	run_test("Test I 6 Number INT_MIN", "|%i|", -2147483648);
	run_test("Test I 7 Number INT_MIN-1", "|%i|", -2147483649);
	run_test("Test I 8 Number as hex", "|%i|", 0xdeadface);
	run_test("Test I 9 Number as bin", "|%i|", 0b101010);
	run_test("Test I 10 Number UINT_MAX", "|%i|", 4294967295);
	run_test("Test I 11 Number LONG_MAX", "|%i|", 2147483647);
	run_test("Test I 12 Passing a char", "|%i|", '#');
}
