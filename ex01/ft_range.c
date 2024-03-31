/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 01:34:02 by brian             #+#    #+#             */
/*   Updated: 2024/04/01 02:05:17 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(max - min);
	if (min >= max || (min == 0 && max == 0))
		return (NULL);
	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

// #include <stdio.h>
// int main()
// {
// 	int min = -3;
// 	int max = 3;
// 	int i = 0;
// 	int *array = ft_range(min, max);

// 	while (i <= (max - min))
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// 	return (0);
// }