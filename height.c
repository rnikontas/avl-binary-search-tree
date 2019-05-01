#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

int height(node* n) {
	if (n == NULL) return 0;
	else return n->height;
}
