/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:38:44 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/11 10:49:17 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"

int	main(void)
{
	ft_putstr_fd("\e[1;92mft_printf Mandatory Tests"DEF_COLOR"\n\n", 1);
	tests_c();
	test_s();
	//system("leaks ft_printf_test");
	return (0);
}

int	print_expected(char *conversion, ...)
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
