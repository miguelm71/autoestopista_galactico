#ifndef BSQ
#define BSQ

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct f_data f_data;
struct f_data
{
	char empty_c;
	char fill_c;
	char barrier_c;
	int lines;
	int columns;
};

typedef struct square square;
struct square{
	int x;
	int y;
	int len;
};

#endif