/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:03:41 by mmateo-m          #+#    #+#             */
/*   Updated: 2022/07/12 20:00:11 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlcpy(char *dest, char *src);

int main()
{
	char p1 [] = "111111111111111111111111111111\0";
	char source[] = "hola caracola\0";
	char dest[] = "k\0";
	char p2 [] = "222222222222222222222222222222\0";
	char *devuelto;
	
	devuelto = ft_strlcpy(dest, source);

	printf ("p1: %s\n", p1);
	printf ("source: %s\n", source);
	printf ("dest: %s\n", dest);
	printf ("p2: %s\n", p2);
}
