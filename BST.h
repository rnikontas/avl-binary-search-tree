#include <stdio.h>
#include <stdlib.h>

/* Ramojus Nikontas, PS 4 gr.
 * Binary Search Tree (AVL Type) for Vilnius University Algorithm and Data Structures class.
 *
 * This is a type of self-balancing Binary Search Tree(BST). The structure tree contains the pointer to the root of the
 * tree as well as the entire height of the tree. All of the functions used to interact with the tree returns nothing
 * (return type - void)
 *
 * The structure node contains the data (the type of which can be assigned below), two pointers to its children and its
 * height, which is used for balancing (the user shouldn't assign a value to this).
 * The root of the tree will always have the highest height value and its children will inherit their parents' height
 * minus one.
 *
 * The user should never call node* functions (more info below).
 *
 * Usage:
 * The user creates one or more tree* type pointers. The very first function should be the creation of the tree:
 *      int main() {
 *          tree* tree;
 *          tree = create_tree();
 *      }
 *
 * create_tree() is the only function that returns something(in this case, the pointer to the tree struct), the rest
 * of the functions for interacting with the tree ,as described below, returns nothing.
*/

// You can assign any data type to be used here, however, printing the data will be formatted to %d.
// If you require different formatting, adjust print.c lines 10 to 12.
typedef int data_type;

typedef struct tree {
    struct node* root;
    int height;
} tree;

typedef struct node {
	data_type data;
	struct node* left;
	struct node* right;
	int height;
} node;

// MAIN FUNCTIONS

tree* create_tree();                      // Allocates memory for the tree. Returns the pointer.
void tree_insert(tree* t, data_type data);// Inserts the specified data in the specified tree.
void tree_erase(tree* t, data_type data); // Deletes (if it exists) data in the specified tree.
void tree_search(tree* t, data_type data);// Searches for data in the specified tree. Prints Found/Not Found.
void discard_tree(tree* t);               // Deletes the entire tree.
void print_tree(tree* t);                 // Prints the entire tree to the console.





// DO NOT USE THESE FUNCTIONS ON THEIR OWN

node* create(data_type data);
node* insert(node* root, data_type data);
node* erase(node* root, data_type data);
void search(node* root, data_type data);

node* left_rotate(node* n);
node* right_rotate(node* n);
node* smallest_node(node* n);

int height(node* n);
int max(int a, int b);
int get_balance(node* n);
void print(node* n);
void nuke(node* root);


