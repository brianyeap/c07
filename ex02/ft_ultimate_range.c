/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 01:55:47 by brian             #+#    #+#             */
/*   Updated: 2024/04/02 00:24:08 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int mem;

	i = 0;
	mem = max - min;
	if (min >= max || (min == 0 && max == 0))
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * mem);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (mem);
}

// #include <stdio.h>
// int main()
// {
// 	int min = -3;
// 	int max = 3;
// 	int i = 0;
// 	int *array;

// 	printf("NUM: %d\n", ft_ultimate_range(&array, min, max));

// 	while (i < (max - min))
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// 	return (0);
// }