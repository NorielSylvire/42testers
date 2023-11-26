/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_misc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:49:29 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/25 21:44:38 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"
#include <libft.h>

void	test_misc(void)
{
	int	expected_res;
	int	actual_res;

	ft_putstr_fd("\n\n"MAGENTA"Misc Tests" DEF_COLOR, 1);
	run_test("Test Misc 1 Invalid conversion %r", "|%r|", 1);
	run_test("Test Misc 2 Invalid conversion %.", "|%.|", 1);
	run_test("Test Misc 3 Invalid conversion %y", "|%y|", 1);
	run_test("Test Misc 4 Invalid conversion %k", "|%k|", 1);
	run_test("Test Misc 5 Invalid conversion inside a sentence",
		"|Hello I am %k and this is how I behave between other chars|", 1);
	run_test("Test Misc 6 Multiple invalid conversions in one sentence",
		"|Hello I am %k and this %r how I %y between %ñ chars|", 1);
	run_test("Test Misc 7 Invalid conversion %☕", "|%☕|", 1);
	run_test("Test Misc 8 "MAGENTA"Colored output"DEF_COLOR,
		"|"MAGENTA"I "RED"am "YELLOW"very "BLUE"colorful!"DEF_COLOR"|", 1);
	run_test("Test Misc 9 Colored output with conversions",
		CYAN"|%s%d|"DEF_COLOR, "This is a number: ", 42);
	run_test("Test Misc 10 Colored conversion and args",
		CYAN"|%s%p"DEF_COLOR"|", RED"This is a pointer: "GREEN, &actual_res);
	run_test("Test Misc 11 Random conversions",
		"|jaDA%sduDUW%diVdY4F%i3315j)7%pEcv$2gs%c%is%cd(&%X4)DShsh.d|",
		"s3cRe7", 42, -10, &actual_res, '$', 4294967295, 627, &expected_res);
	run_test("Test Misc 12 Rabdin conversions",
		"|s_Fs\r[Gw7%c g@84hS#8I74aG %%%x3OCXE%cG2_5ES8t'r63Qh%x1X8C=yQ52Ds|",
		410173056, 177452623, 1262869317, -33482883634);
	run_test("Test Misc 13 Many non-printable characters",
		"|\1\2\3\4\5\6\7|", 1);
}
