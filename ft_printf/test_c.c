/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:12:04 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/11 10:51:26 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"
#include <assert.h>

void	tests_c(void)
{
	int	expected_res;
	int	actual_res;

	ft_putstr_fd("\e[1;95m%c Tests" DEF_COLOR, 1);
	run_test("\nTest C 1 Char A", "%c\n", 'A');
    run_test("\nTest C 2 Char B", "%c\n", 'B');
    run_test("\nTest C 3 Char C", "%c\n", 'C');
    run_test("\nTest C 4 Char 1", "%c\n", '1');
    run_test("\nTest C 5 Char !", "%c\n", '!');
    run_test("\nTest C 6 Char \\n", "%c\n", '\n');
    run_test("\nTest C 7 Char \\t", "%c\n", '\t');
    run_test("\nTest C 8 Char ' '", "%c\n", ' ');
    run_test("\nTest C 9 Char @", "%c\n", '@');
    run_test("\nTest C 10 Char a", "%c\n", 'a');
    run_test("\nTest C 11 Char 5", "%c\n", '5');
    run_test("\nTest C 12 Char #", "%c\n", '#');
    run_test("\nTest C 13 Char Z", "%c\n", 'Z');
    run_test("\nTest C 14 Char &", "%c\n", '&');
    run_test("\nTest C 15 Char 9", "%c\n", '9');
    run_test("\nTest C 16 Char ?", "%c\n", '?');
    run_test("\nTest C 17 Char +", "%c\n", '+');
    run_test("\nTest C 18 Char %", "%c\n", '%');
    run_test("\nTest C 19 Char $", "%c\n", '$');
    run_test("\nTest C 20 Char 0", "%c\n", '0');
	run_test("\nTest C 21 Multiple char as arg",
		  "|%c, %c, %c, %c|\n", 'x', '0', '*', '\n');
	run_test("\nTest C 22 Multiple num to char",
		  "|%c, %c, %c|\n", 42, 95, 67);
	run_test("\nTest C 23 Invalid conversion %r","|%r|\n", 1);
	run_test("\nTest C 24 Invalid conversion %.","|%.|\n", 1);
	run_test("\nTest C 25 Invalid conversion %y","|%y|\n", 1);
	run_test("\nTest C 26 Invalid conversion %k","|%k|\n", 1);
	run_test("\nTest C 27 Unicode ñ","|ñññ|\n", 1);
	run_test("\nTest C 28 Unicode Ǝ","|ƎƎƎ|\n", 1);
	run_test("\nTest C 29 Unicode π","|3.141592.... = πππ|\n", 1);
	run_test("\nTest C 30 Unicode emoji coffee ☕","|☕☕☕|\n", 1);
}
