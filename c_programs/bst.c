#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

bst_node_t *root = NULL;

void process_node(bst_node_t * node)
{
	printf("%2d ", node->key);
}
void bst_inorder(bst_node_t * node)
{
	if (node == NULL)
		return;

	bst_inorder(node->left);
	process_node(node);
	bst_inorder(node->right);
}


bst_node_t*
bst_insert(bst_node_t * node, int key )
{
	bst_node_t * new=NULL;

	if (node == NULL){
            new = calloc(1, sizeof(bst_node_t));
	    new->key = key;
	    return new;
	}
	if (node->key > key){
		node->left = bst_insert(node->left, key);
		return node;
	}
	if (node->key < key){
		node->right = bst_insert(node->right, key);
		return node;
	}
}
int main()
{
	root = bst_insert(NULL, 10);
	bst_insert(root, 7);
	bst_insert(root, 5);
	bst_insert(root, 20);
	bst_inorder(root);
}


