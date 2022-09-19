#ifndef DICT_HEADER
#define DICT_HEADER


#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct node node;
struct node
{
	char *n;
	char *v;
};

node *create_list(int size);
int add_node (node *lista, int index, char *name, char *value);
node get_node (node *lista, int index);
void print_node(node n);


#endif