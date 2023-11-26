/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:43:21 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/26 09:53:51 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file test_helpers.c
 * @brief Provides functions used for all ft_printf tests.
 *
 * This file provides functions useful for testing all parts of ft_printf
 * in general. These functions should not go in the libtest42 library
 * because they are tailored for ft_printf specificallly.
 */

#include "./include/ft_printf_mandatory.h"

int	print_expected(char *conversion, ...)
{
	int		printf_res;
	va_list	args;

	va_start(args, conversion);
	ft_putstr_fd("\n\nExpected: ", 1);
	printf_res = vprintf(conversion, args);
	ft_putstr_fd("Expected return: ", 1);
	ft_putnbr_fd(printf_res, 1);
	va_end(args);
	return (printf_res);
}
