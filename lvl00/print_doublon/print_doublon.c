/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 01:32:25 by kradoste          #+#    #+#             */
/*   Updated: 2019/09/09 02:11:21 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int xnb, xna, key;
	xna = xnb = key = 0;
	while (xna < na && xnb < nb)
	{
		if (a[xna] > b[xnb]) xnb++;
		else if (b[xnb] > a[xna]) xna++;
		else
		{
			if (key) printf(" ");
			printf("%d", b[xnb]);
			key = 1; xnb++; xna++;
		}
	}
	printf("\n");
}

/*int main()
{
	int a[] = { -5,  2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000 };
	int b[] = { 2,  4,  5,  6,  7, 10,  40,  70};
	print_doublon(a, 11, b, 8);
	return (0);
}
*/
