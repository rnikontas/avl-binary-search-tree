#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

void tree_search(tree* t, data_type data) {
    if (t->root == NULL) {
        printf("BST: Tree is empty.\n");
    } else search(t->root, data);
}