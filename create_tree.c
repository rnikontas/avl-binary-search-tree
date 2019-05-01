#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

tree* create_tree() {
    tree* new_tree = (tree*)malloc(sizeof(tree));

    if (new_tree == NULL) {
        printf("BST: FAILED TO CREATE TREE\n");
        return NULL;
    }

    new_tree->root = NULL;
    new_tree->height = 0;

    return new_tree;
}