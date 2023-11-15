/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:12:04 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/15 20:56:03 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"

void	test_x(void)
{
	int	expected_res;
	int	actual_res;

	ft_putstr_fd("\n\n"MAGENTA"%x Tests" DEF_COLOR, 1);
	run_test("Test x 1 Hexadecimal Normal", "|%x|", 0x14bee62);
    run_test("Test x 2 Hexadecimal Normal", "|%x|", 0xdeadface);
    run_test("Test x 3 Hexadecimal 0", "|%x|", 0);
    run_test("Test x 4 Hexadecimal INT_MAX", "|%x|", 2147483647);
    run_test("Test x 5 Hexadecimal INT_MAX+1", "|%x|", 2147483648);
    run_test("Test x 6 Hexadecimal pointer", "|%x|", &expected_res);
    run_test("Test x 7 Hexadecimal string literal", "|%x|", "string");
    run_test("Test x 8 Hexadecimal as oct", "|%x|", 07461532);
    run_test("Test x 9 Hexadecimal as bin", "|%x|", 0b00101010);
    run_test("Test x 10 Hexadecimal UINT_MAX", "|%x|", 4294967295);
    run_test("Test x 11 Hexadecimal UINT_MAX+1", "|%x|", 4294967296);
    run_test("Test x 12 Passing a char", "|%x|", '*');
}

void	test_X(void)
{
	int	expected_res;
	int	actual_res;

	ft_putstr_fd("\n\n"MAGENTA"%X Tests" DEF_COLOR, 1);
	run_test("Test X 1 Hexadecimal Normal", "|%X|", 0x14bee62);
    run_test("Test X 2 Hexadecimal Normal", "|%X|", 0xdeadface);
    run_test("Test X 3 Hexadecimal 0", "|%X|", 0);
    run_test("Test X 4 Hexadecimal INT_MAX", "|%X|", 2147483647);
    run_test("Test X 5 Hexadecimal INT_MAX+1", "|%X|", 2147483648);
    run_test("Test X 6 Hexadecimal pointer", "|%X|", &expected_res);
    run_test("Test X 7 Hexadecimal string literal", "|%X|", "string");
    run_test("Test X 8 Hexadecimal as oct", "|%X|", 07461532);
    run_test("Test X 9 Hexadecimal as bin", "|%X|", 0b00101010);
    run_test("Test X 10 Hexadecimal UINT_MAX", "|%X|", 4294967295);
    run_test("Test X 11 Hexadecimal UINT_MAX+1", "|%X|", 4294967296);
    run_test("Test X 12 Passing a char", "|%X|", '*');
}
