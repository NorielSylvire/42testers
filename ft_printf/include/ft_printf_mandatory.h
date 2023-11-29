/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mandatory.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:40:43 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/28 21:08:14 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_MANDATORY_H
# define FT_PRINTF_MANDATORY_H
# include <libtest42.h>
# include <ft_printf.h>

# define run_test(test_name, conversion, ...) {\
		ft_putstr_fd(CYAN "\n\n" test_name DEF_COLOR, 1);\
		expected_res = print_expected(conversion"\n", __VA_ARGS__);\
		ft_putstr_fd("\n\nActual: ", 1);\
		actual_res = ft_printf(conversion"\n", __VA_ARGS__);\
		ft_putstr_fd("Actual return: ", 1);\
		ft_putnbr_fd(actual_res, 1);\
		compare((void *) &expected_res, (void *) &actual_res, sizeof (int));\
	}

void	test_c(void);
void	test_s(void);
void	test_d(void);
void	test_i(void);
void	test_u(void);
void	test_x(void);
void	test_X(void);
void	test_p(void);
void	test_misc(void);
int		print_expected(char *conversion, ...);
void	delete_keyval(void *keyval);

#endif
