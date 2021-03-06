#include <stdio.h>
#include "tree_util.h"

tree_t * root = NULL;
int main()
{
    root = insert_node(1, 0, 0);
#if 1
    insert_node(2,1,0);
    insert_node(3,1,1);
    insert_node(4,2,0);
    insert_node(5,2,1);
    insert_node(6,3,0);
    insert_node(7,3,1);
#endif

    printf("Height of the tree is %d\n", height_tree(root));
    inorder_traverse(root);

    printf("\nLevel Order Traversal :");
    level_order_traversal(root);
}
