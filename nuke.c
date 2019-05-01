#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

void nuke(node* root) {
	
	if (root != NULL) {
		nuke(root->left);
		nuke(root->right);
		free(root);
	}
}
