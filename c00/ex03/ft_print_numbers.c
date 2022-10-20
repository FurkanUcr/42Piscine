/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maucar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:00:52 by maucar            #+#    #+#             */
/*   Updated: 2022/10/20 16:21:04 by maucar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	say;

	say = 48;
	while (say <= 57)
	{
		write(1, &say, 1);
		say++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
