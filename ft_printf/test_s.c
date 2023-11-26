/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:27:12 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/25 19:53:37 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"

void	test_s(void)
{
	int	expected_res;
	int	actual_res;

	ft_putstr_fd("\n\n"MAGENTA"%s Tests" DEF_COLOR, 1);
	run_test("Test S 1 Word hello", "%s", "hello");
	run_test("Test S 2 Word world", "%s", "world");
	run_test("Test S 3 Sentente", "%s",
		"Hello help me I am under the water uuuuhhh");
	run_test("Test S 4 Sentence", "%s", "Under the sea, under the sea!");
	run_test("Test S 5 Sentence new lines", "%s",
		"To infinity,\nand beyond!\n- said Buzz Light Year.");
	run_test("Test S 6 Sentenc new lines", "%s",
		"I am inevitable.\n- said Thanos as he snapped his fingers.");
	run_test("Test S 7 Long sentence", "%s",
		"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer dapibus euismod ante, non tincidunt turpis lacinia pretium. Integer euismod, eros vitae placerat elementum, erat sapien porttitor elit, sit amet auctor arcu sem ac odio. Cras accumsan ullamcorper quam eu ultrices. Nullam egestas, eros nec eleifend ornare, ligula nibh pharetra purus, at vulputate lorem ante in purus. Phasellus quis fermentum sapien, vitae ultricies mauris. Donec maximus bibendum est. Aliquam elementum ac tortor a vehicula. Vivamus mattis scelerisque leo, non gravida enim consequat sed. Donec convallis elit est, et maximus mi rhoncus quis. Etiam et tristique eros. Aenean pharetra scelerisque pulvinar. Praesent nec tortor convallis, suscipit massa ut, consectetur justo. Donec suscipit, felis quis blandit molestie, enim purus molestie augue, ac vulputate turpis eros non magna. Phasellus ultrices ut nisi pretium bibendum. Sed vestibulum convallis nibh tincidunt dictum.");
	run_test("Test S 8 Sentence in chinese", "%s", "他被判以重刑");
	run_test("Test S 9 Sentence in japanese", "%s",
		"文, 刑罰, 刑, ～の刑を与える, ～に判決を下す, 文（ぶん）, 刑（けい）, 判決（はんけつ）を言（い）い渡（わた）す.");
	run_test("Test S 10 Sentence with emojis", "%s",
		"Animal Crossing 🐯🐨🐼❌");
	run_test("Test S 11 Args with percentages in them", "|%s%s%s|",
		"I am a string with %s's!\n", "I am a dwarf and I'm diggin a %s!",
		"diggy diggy %s! Digging a %i!");
	run_test("Test S 12 Hidden string",
		"|I am one string|\n\0|I am another string|", 0);
}
