/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:27:12 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/11 10:51:00 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf_mandatory.h"

void	test_s(void)
{
	int	expected_res;
	int	actual_res;

	ft_putstr_fd("\e[1;95m%s Tests" DEF_COLOR, 1);
	run_test("\nTest S 1 Word hello", "%s\n", "hello");
    run_test("\nTest S 2 Word world", "%s\n", "world");
    run_test("\nTest S 3 Sentente", "%s\n",
			"Hello help me I am under the water uuuuhhh");
    run_test("\nTest S 4 Sentence", "%s\n", "Under the sea, under the sea!");
    run_test("\nTest S 5 Sentence new lines", "%s\n",
			"To infinity,\nand beyond!\n- said Buzz Light Year.");
    run_test("\nTest S 6 Sentenc new lines", "%s\n",
			"I am inevitable.\n- said Thanos as he snapped his fingers.");
    run_test("\nTest S 7 Long sentence", "%s\n",
			"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer dapibus euismod ante, non tincidunt turpis lacinia pretium. Integer euismod, eros vitae placerat elementum, erat sapien porttitor elit, sit amet auctor arcu sem ac odio. Cras accumsan ullamcorper quam eu ultrices. Nullam egestas, eros nec eleifend ornare, ligula nibh pharetra purus, at vulputate lorem ante in purus. Phasellus quis fermentum sapien, vitae ultricies mauris. Donec maximus bibendum est. Aliquam elementum ac tortor a vehicula. Vivamus mattis scelerisque leo, non gravida enim consequat sed. Donec convallis elit est, et maximus mi rhoncus quis. Etiam et tristique eros. Aenean pharetra scelerisque pulvinar. Praesent nec tortor convallis, suscipit massa ut, consectetur justo. Donec suscipit, felis quis blandit molestie, enim purus molestie augue, ac vulputate turpis eros non magna. Phasellus ultrices ut nisi pretium bibendum. Sed vestibulum convallis nibh tincidunt dictum.");
    run_test("\nTest S 8 Sentence in chinese", "%s\n", "他被判以重刑");
    run_test("\nTest S 9 Sentence in japanese", "%s\n",
			 "文, 刑罰, 刑, ～の刑を与える, ～に判決を下す, 文（ぶん）, 刑（けい）, 判決（はんけつ）を言（い）い渡（わた）す.");
    run_test("\nTest S 10 Sentence with emojis", "%s\n",
			 "Animal Crossing 🐯🐨🐼❌");
}
