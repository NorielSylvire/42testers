/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:38:44 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/26 10:02:58 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"
#include <libft.h>

static t_args	parse_args(int argc, char **argv);
static int		find_arg(char *param, int argc, char **argv);
static void		mandatory_tests(void);
static void		bonus_tests(void);

int	main(int argc, char **argv)
{
	t_args	args;

	args = parse_args(argc, argv);
	if (args.mandatory)
		mandatory_tests();
	if (args.bonus)
		bonus_tests();
	if (args.leaks)
		system("leaks ft_printf_test");
	return (0);
}

static t_args	parse_args(int argc, char **argv)
{
	t_args	args;

	args.mandatory = argc == 1
		|| (argc > 1 && find_arg("mandatory", argc, argv));
	args.bonus = BONUS
		&& (argc == 1 || (argc > 1 && find_arg("bonus", argc, argv)));
	args.leaks = argc > 1 && find_arg("leaks", argc, argv);
	return (args);
}

static int	find_arg(char *param, int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (!ft_strncmp(param, argv[i], ft_strlen(param)))
			return (1);
		i++;
	}
	return (0);
}

static void	mandatory_tests(void)
{
	ft_putstr_fd("\e[1;92mft_printf Mandatory Tests"DEF_COLOR"\n\n", 1);
	test_c();
	test_s();
	test_d();
	test_i();
	test_u();
	test_x();
	test_X();
	test_p();
	test_misc();
}

static void	bonus_tests(void)
{
	ft_putstr_fd("\n\n\e[1;9mft_printf Bonus Tests"DEF_COLOR"\n\n", 1);
}
