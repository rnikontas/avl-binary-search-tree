#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

node* smallest_node(node* n) {
    node* t = n;

    while (t->left != NULL) t = t->left;
    return t;
}

