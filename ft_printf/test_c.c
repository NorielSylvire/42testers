/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:12:04 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/11 00:58:41 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"
#include <assert.h>

static void	print_test_name(char *test_name);
static int	print_expected(char *conversion, ...);

void	tests_c(void)
{
	int	expected_res;
	int	actual_res;
	
	run_test("|%c, %c, %c, %c|\n", "\nTest C 1 Char as arg", 'x', '0', '*', '\n');
	run_test("|%c, %c|\n", "\nTest C 2 Num to char", 42, 95);
	// @TODO errores printf formato inválido
	run_test("|%r|\n", "\nTest C 3 Invalid conversion", 1);
}

static void	print_test_name(char *test_name)
{
	char	*colored_name;

	// Prepare and print the test's name
	colored_name = ft_preppend(test_name, BLUE, 0, 0);
	colored_name = ft_append(colored_name, DEF_COLOR, 1, 0);
	ft_putstr_fd(test_name, 1);
	ft_free((void **) &colored_name);
}

static int	print_expected(char *conversion, ...)
{
	int	printf_res;
	va_list	args;

	va_start(args, conversion);
	ft_putstr_fd("\nExpected: ", 1);
	printf_res = vprintf(conversion, args);
	ft_putstr_fd("\nExpected return: ", 1);
	ft_putnbr_fd(printf_res, 1);
	va_end(args);
	return (printf_res);
}
