#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

void search(node* root, data_type data){

    if (root->data == data) {
        printf("BST: Value %d found.\n", data);
    } else if (data > root->data) {
        if (root->right == NULL) {
            printf("BST: Value %d not found.\n", data);
        } else search(root->right, data);
    } else if (data < root->data) {
        if (root->left == NULL) {
            printf("BST: Value %d not found.\n", data);
        } else search(root->left, data);
    }
}