/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_anagram.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 00:59:22 by kradoste          #+#    #+#             */
/*   Updated: 2019/09/09 01:31:44 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_anagram(char *a, char *b)
{
	int	all[150] = {0};
	while (*a) all[(int)*(a++)]++;
	while (*b) all[(int)*(b++)]--;
	for (int i = 0; i < 150; i++)
		if (all[i])
			return (0);
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char	*str1 = ".123?.";
	char	*str2 = "?321..";
	printf("is it? => %d\n", is_anagram(str1, str2));
	return (0);
}
*/
