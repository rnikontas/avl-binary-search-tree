#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

node* create(data_type data) {
    node* new_node = (node*)malloc(sizeof(node));

    if (new_node == NULL) {
        printf("BST: FAILED TO CREATE TREE LEAF\n");
        return NULL;
    }

    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->height = 1;

    return new_node;
}

