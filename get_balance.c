#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

int get_balance(node* n) {
    if (n == NULL) return 0;
    return height(n->left) - height(n->right);
}