/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:20:30 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/10 21:43:35 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIB_H
# define TESTLIB_H
# include <stdio.h>
// @TODO PLEASE change this absolute path to something better ASAP!!
# include "/Users/fhongu/documents/repos/libft/libft.h"
# define DEF_COLOR "\033[0;39m"
# define GRAY "\033[0;90m"
# define RED "\033[0;91m"
# define GREEN "\033[0;92m"
# define YELLOW "\033[0;93m"
# define BLUE "\033[0;94m"
# define MAGENTA "\033[0;95m"
# define CYAN "\033[0;96m"
# define WHITE "\033[0;97m"

int	test(void *expected, void *actual, char *test_name, int nbytes);
int	compare(void *expected, void *actual, int nbytes);

#endif
