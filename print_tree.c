#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

void print_tree(tree* t) {
	if (t->root == NULL) {
		printf("Tree is empty.\n");
	} else print(t->root);
};
