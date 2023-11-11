/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest42.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:20:30 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/11 19:38:19 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTEST42_H
# define LIBTEST42_H
# include <stdio.h>
# include <libft.h>
# define DEF_COLOR "\e[0;39m"
# define GRAY "\e[0;90m"
# define RED "\e[0;31m"
# define GREEN "\e[0;92m"
# define YELLOW "\e[0;93m"
# define BLUE "\e[0;94m"
# define MAGENTA "\e[0;95m"
# define CYAN "\e[0;96m"
# define WHITE "\e[0;97m"

int	compare(void *expected, void *actual, int nbytes);

#endif
