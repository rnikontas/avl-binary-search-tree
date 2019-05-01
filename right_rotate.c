#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

node* right_rotate(node* u) {
	node* m = u->left;
	node* l = m ->right;

	m->right = u;
	u->left = l;

	u->height = max(height(u->left), height(u->right)) + 1;
	m->height = max(height(m->left), height(m->right)) + 1;

	return m;
}
