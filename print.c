#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

void print(node* n) {

    if (n == NULL) return;

    printf("BST: %d [%d]", n->data, n->height);
    if (n->left != NULL) printf("(L:%d [%d])", n->left->data, n->left->height);
    if (n->right != NULL) printf("(R:%d [%d])", n->right->data, n->right->height);

    printf("\n");

    print(n->left);
    print(n->right);
}