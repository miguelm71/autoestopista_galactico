#include "test.h"
#include <stdio.h>
#include <string.h>


int main (){
	int size = 4;
	char *name;
	char *value;
	name = malloc(sizeof(char) * 10);
	value = malloc(sizeof(char) * 20);
	strcpy(name, "miguel");
	strcpy(value, "mi valor");

	node *lista = create_list(size);
	add_node (lista, 3, name, value);
	node otro = get_node(lista, 3);

	print_node(otro);
}