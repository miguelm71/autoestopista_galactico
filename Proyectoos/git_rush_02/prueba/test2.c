#include "test.h"
#include <stdio.h>
#include <string.h>

node *create_list(int size)
{
	node *lista = malloc(sizeof (node) * size);
	return lista;
}

int add_node (node *lista, int index, char *name, char *value)
{
	lista[index].n = name;
	lista[index].v = value;

	return (1);
}

node get_node (node *lista, int index)
{
	return lista[index];
}

void print_node(node n)
{
	printf ("name: %s\n", n.n);
	printf ("value: %s\n", n.v);
}