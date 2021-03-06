#include <stdio.h>
#include "tree_util.h"

extern tree_t * root;
int height = 0;

tree_t * new_node()
{
    tree_t * new = calloc(1, sizeof(tree_t)); 
    new->left = NULL;
    new->right = NULL;
    new->key = 0;
    return new;
}
tree_t * find ( tree_t * node, int key )
{
    tree_t * new = NULL;
    if ( node->key == key)
	    return node;
    if( node->left != NULL)
	    new = find(node->left, key);
    if ( new != NULL)
	   return new;
    
    if( node->right != NULL)
	   new = find(node->right, key);
    return new; 


}
/*
 * int key : New element to be inserted
 * int insert_key: Element already in tree and will become parent of 'key.
 *                 '0' of this means, this is root
 * int pos : 0 - Left 1 - Right of insert_key
 */
tree_t * insert_node(int key, int insert_key, int pos )
{
    tree_t * new = new_node();
    tree_t * parent = NULL;

    if (new == NULL){
        return NULL;
    }
    new->key = key;
    if ( insert_key == 0 ){
        return new;
    }

    parent = find(root, insert_key);
    if ( parent == NULL){
	    printf("Parent :%d not found \n", insert_key);
	    free(new);
	    return NULL;
    }
    if ( pos ){ // Right
	    parent->right = new;
    }else{
	    parent->left = new;
    }
    return new;
}

void  inorder_traverse(tree_t * node)
{
    if (node == NULL)
	    return;
    inorder_traverse(node->left);
    printf("%d ", node->key);
    inorder_traverse(node->right);
}
int height_tree_internal(tree_t * node, int level)
{
    if ( node == NULL )
	    return 0;
    if ( height < level+1 ){
	    height = level + 1;
    }
    if ( node->left)
	    height_tree_internal(node->left, level+1);
    if (node->right)
	    height_tree_internal(node->right, level +1);
    return height;
}
int height_tree( tree_t * node )
{
    return ( height_tree_internal(node, 0));
}
void print_nodes_at_level(tree_t * node, int level)
{
    if ( node == NULL || level == 0 )
	    return ;

    if ( level == 1 ){
	    printf("%d ", node->key);
	    return;
    }
    if ( node->left )
	    print_nodes_at_level(node->left, level - 1 );
    if ( node->right )
	    print_nodes_at_level(node->right, level - 1 );
}

void level_order_traversal(tree_t * node)
{
    int height = height_tree(node);
    int i = 0;

    for (i=0; i < height; ++i){
	   print_nodes_at_level(node, i+1); 
	   printf("\n");
    }
    return;
}


