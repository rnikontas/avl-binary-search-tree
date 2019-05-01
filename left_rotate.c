#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

node* left_rotate(node* u) {
	node* m = u->right;
	node* l = m->left;

	m->left = u;
	u->right = l;

	u->height = max(height(u->left), height(u->right)) + 1;
	m->height = max(height(m->left), height(m->right)) + 1;

	return m;
}
