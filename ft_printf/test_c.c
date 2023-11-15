/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:12:04 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/15 09:08:20 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"

void	tests_c(void)
{
	int	expected_res;
	int	actual_res;

	ft_putstr_fd(MAGENTA"%c Tests" DEF_COLOR, 1);
	run_test("Test C 1 Char A", "%c", 'A');
    run_test("Test C 2 Char B", "%c", 'B');
    run_test("Test C 3 Char C", "%c", 'C');
    run_test("Test C 4 Char 1", "%c", '1');
    run_test("Test C 5 Char !", "%c", '!');
    run_test("Test C 6 Char \\n", "%c", '\n');
    run_test("Test C 7 Char \\t", "%c", '\t');
    run_test("Test C 8 Char ' '", "%c", ' ');
    run_test("Test C 9 Char @", "%c", '@');
    run_test("Test C 10 Char a", "%c", 'a');
    run_test("Test C 11 Char 5", "%c", '5');
    run_test("Test C 12 Char #", "%c", '#');
    run_test("Test C 13 Char Z", "%c", 'Z');
    run_test("Test C 14 Char &", "%c", '&');
    run_test("Test C 15 Char 9", "%c", '9');
    run_test("Test C 16 Char ?", "%c", '?');
    run_test("Test C 17 Char +", "%c", '+');
    run_test("Test C 18 Char %", "%c", '%');
    run_test("Test C 19 Char $", "%c", '$');
    run_test("Test C 20 Char 0", "%c", '0');
	run_test("Test C 21 Multiple char as arg",
		  "|%c, %c, %c, %c|", 'x', '0', '*', '\n');
	run_test("Test C 22 Multiple num as arg",
		  "|%c, %c, %c|", 42, 95, 67);
	run_test("Test C 22 Unicode ñ","|ñññ|", 1);
	run_test("Test C 23 Unicode Ǝ","|ƎƎƎ|", 1);
	run_test("Test C 24 Unicode π","|3.141592.... = πππ|", 1);
	run_test("Test C 25 Unicode emoji coffee ☕","|☕☕☕|", 1);
	run_test("Test C 26 Null char", "|%c|", 0);
	run_test("Test C 27 Multiple null char", "|%c, %c, %c|", 0, 0, 0);
}
