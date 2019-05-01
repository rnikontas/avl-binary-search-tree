#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

// Driver program for demonstration and functionality testing.
int main() {
	tree* tree = NULL;
	tree = create_tree();

	int input;

	while (1) {
		printf("Enter value to insert:\n");
		scanf("%d", &input);
		if (input == -1) break;
		tree_insert(tree, input);
		print_tree(tree);
	}

	input = 0;

	while (1) {
		printf("Enter value to delete:\n");
		scanf("%d", &input);
		if (input == -1) break;
		tree_erase(tree, input);
		print_tree(tree);
	}

	input = 0;

	while (1) {
	    printf("Enter value to search:\n");
	    scanf("%d", &input);
	    if (input == -1) break;
	    tree_search(tree, input);
	}

	discard_tree(tree);

	return 0;
}
