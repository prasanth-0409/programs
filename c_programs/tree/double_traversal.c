#include <stdio.h>
#include "tree_util.h"
// Double traversal tree
// Node, left sub-tree, Node, Right Sub-tree
tree_t * root = NULL;
void double_traversal(tree_t *node)
{
	if ( node == NULL )
		return;
	printf("%d ",node->key);
	double_traversal(node->left);
	printf("%d ",node->key);
	double_traversal(node->right);
}
int main()
{
    root = insert_node(1, 0, 0);
    insert_node(7,1,0);
    insert_node(3,1,1);
#if 1
    insert_node(4,7,0);
    insert_node(5,7,1);
    insert_node(6,3,1);
#endif
    //:w
    //insert_node(7,3,1);
    printf("Inorder traversal:");
    inorder_traverse(root);
    printf("\n");
    printf("Double traversal:");
    double_traversal(root);
}
