#include <stdlib.h>
typedef struct tree_{
    struct tree_ *left;
    int key;
    struct tree_ *right;
}tree_t;
tree_t * insert_node(int key, int insert_key, int pos );
void  inorder_traverse(tree_t * node);
int height_tree(tree_t * node);
void level_order_traversal(tree_t * node);
