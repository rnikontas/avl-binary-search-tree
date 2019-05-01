#include <stdio.h>
#include <stdlib.h>

#include "BST.h"


node* insert(node* root, data_type data) {

	if (root == NULL) {
	    return(create(data));
	}

	if (data < root->data) {
	    root->left = insert(root->left, data);
	} else if (data > root->data) {
        root->right = insert(root->right, data);
    } else return root;

	root->height = 1 + max(height(root->left), height(root->right));

	int balance = get_balance(root);

	if ((balance > 1) && (data < root->left->data)) return right_rotate(root);
	if ((balance < -1) && (data > root->right->data)) return left_rotate(root);

	if ((balance > 1) && (data > root->left->data)) {
	    root->left = left_rotate(root->left);
	    return right_rotate(root);
	}

	if ((balance < -1) && (data < root->right->data)) {
	    root->right = right_rotate(root->right);
	    return left_rotate(root);
	}

	return root;
}

