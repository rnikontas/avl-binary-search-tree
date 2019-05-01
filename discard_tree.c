#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

void discard_tree(tree* t) {
    nuke(t->root);
    free(t);
}
