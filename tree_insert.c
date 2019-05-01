#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

void tree_insert(tree* t, data_type data) {
    t->root = insert(t->root, data);
    t->height = t->root->height;
}