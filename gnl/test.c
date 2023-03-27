/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-m <mmateo-m@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:19:21 by mmateo-m          #+#    #+#             */
/*   Updated: 2023/03/27 18:46:16 by mmateo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "get_next_line.h"

int	main(void)
{
	//int		rc;
	//char	*buf;
	char	*r;
	int		fd;
	char	*f = "./files/nl";

	/* file = fopen("./testfile.txt", "w");
	if (file == NULL)
	{
		printf("Error!");
		exit(1);
	}
	fprintf(file, "");
	fclose(file); */
	fd = open(f, O_RDONLY);
	if (fd < 0)
		printf("open() error");
	else
	{
		r = get_next_line(fd);
		if (r != NULL)
			write (1, r, strlen(r));
		while (r != NULL)
		{
			r = get_next_line(fd);
			if (r != NULL)
				write (1, r, strlen(r));
		}
	}
	if (close(fd) != 0)
		printf("close() error");
	/* if (remove("./testfile.txt") == 0)
	{
		printf("The file is deleted successfully.");
	}
	else
	{
		printf("The file is not deleted.");
	} */
}