/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 02:34:14 by brian             #+#    #+#             */
/*   Updated: 2024/04/01 03:30:17 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	 ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	 cal_total_size(char **strs, char *sep, int size)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int len;
	char *str;

	i = 0;
    if (size == 0)
    {
        str = malloc(sizeof(char));
        str[0] = '\0';
        return (str);
    }
	len = cal_total_size(strs, sep, size);
	str = malloc(sizeof(char) + (len + 1));
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size -1 )
			ft_strcat(str, sep);
		i++;
	}
	str[len] = '\0';
	return (str);
}

// #include <stdio.h>
// int main() {
//     char *arr[] = {"Hello", "world!", "mom"};

//     printf("%s",ft_strjoin(2, arr, ""));
//     return 0;
// }