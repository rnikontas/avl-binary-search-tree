#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

node* erase(node* root, data_type data) {

    if (root == NULL) return root;

    if (data < root->data) root->left = erase(root->left, data);
    else if (data > root->data) root->right = erase(root->right, data);
    else {
        if ((root->left != NULL) && (root->right != NULL)) {
            node* t = smallest_node(root->right);
            root->data = t->data;
            root->right = erase(root->right, t->data);
        } else if ((root->left == NULL) && (root->right != NULL)) {
            node* t = root->right;
            *root = *t;
            free(t);
        } else if ((root->left != NULL) && (root->right == NULL)) {
            node* t = root->left;
            *root = *t;
            free(t);
        } else {
            node* t = root;
            root = NULL;
            free(t);
        }
    }

    if (root == NULL) return root;

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = get_balance(root);

    if ((balance > 1) && (get_balance(root->left) >= 0)) return right_rotate(root);
    if ((balance < -1) && (get_balance(root->right) <= 0)) return left_rotate(root);

    if ((balance > 1) && (get_balance(root->left) < 0)) {
        root->left = left_rotate(root->left);
        return right_rotate(root);
    }

    if ((balance < -1) && (get_balance(root->right) > 0)) {
        root->right = right_rotate(root->right);
        return left_rotate(root);
    }

    return root;
}
