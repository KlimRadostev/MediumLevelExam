/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   volume_histogram.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:14:18 by kradoste          #+#    #+#             */
/*   Updated: 2019/09/11 16:18:47 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)

int	volume_histogram(int *histogram, int size)
{
	int left[size], right[size];
	int ret = 0;

	left[0] = histogram[0];
	for (int i = 1; i < size; i++)
		left[i] = MAX(left[i - 1], histogram[i]);

	right[size - 1] = histogram[size - 1];
	for (int i = size - 2; i >= 0; i--)
		right[i] = MAX(right[i + 1], histogram[i]);

	for (int i = 0; i < size; i++)
		ret += MIN(left[i], right[i]) - histogram[i];

	return (ret);
}

#include <stdio.h>
int main()
{
	
    int a[] = { 1, 0, 2, 0, 2 };
    printf("%d\n", volume_histogram(a, 5));

    int b[] = { 0, 0, 4, 0, 0, 6, 0, 0, 3, 0, 5, 0, 1, 0, 0, 0 };
    printf("%d\n", volume_histogram(b, 16));

    int c[] = { 1 };
    printf("%d\n", volume_histogram(c, 1));

    int d[] = {};
    printf("%d\n", volume_histogram(d, 0));
    
    return 0;
}
