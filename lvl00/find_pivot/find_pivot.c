/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 00:29:04 by kradoste          #+#    #+#             */
/*   Updated: 2019/09/09 00:58:15 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_pivot(int *arr, int n)
{
	int total, subTotal;
	total = subTotal = 0;
	for (int i = 0; i < n; ++i) total += arr[i];
	for (int i = 0; i < n; ++i)
	{
		total -= arr[i];
		if (total == subTotal) return (i);
		subTotal += arr[i];
	}
	return (-1);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int arr[] = {50,0};
	printf("pivot => %d", find_pivot(arr, 2));
	return (0);
}
*/
