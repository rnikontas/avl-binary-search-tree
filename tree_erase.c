#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

void tree_erase(tree* t, data_type data) {
    t->root = erase(t->root, data);
};