/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 23:31:53 by kradoste          #+#    #+#             */
/*   Updated: 2019/09/09 00:23:15 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	num_len(int	n)
{
	int	x = 0;
	if (n > 10)
		x = return (num_len(n / 10));
	return (x + 1);
}
*/
int	count_of_2(int n)
{
	int	totalTwos = 0;
	while (n > 1)
	{
		int	tmp = n;
		while (tmp > 0)
		{
			totalTwos += (tmp % 10 == 2) ? 1 : 0;
			tmp /= 10;
		}
		n--;
	}
	return (totalTwos);
}
/*
#include <stdio.h>

int main()
{
	printf("25 => %d\n", count_of_2(22345));
	return (0);
}
*/
