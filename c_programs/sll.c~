#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// Single Linked List

sll_t * head = NULL;

void insert_sll(int  data)
{
	sll_t *temp=head,*new=NULL;
	new = calloc(1, sizeof(sll_t));
	new->data = data;
	if (head == NULL){
		head = new;
		return; 
	}
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}
void print_sll()
{
	sll_t * temp = head;

	while(temp != NULL){
		printf("%2d ", temp->data);
		temp = temp->next;
	}
}
void reverse_sll(sll_t *node, sll_t *prev)
{
    if(node == NULL)
	    return;
    if( node->next == NULL){
	    node->next = prev;
	    head = node;
	    return;
    }
    reverse_sll(node->next, node);
    node->next = prev;
}
int main()
{
    insert_sll(10);
    insert_sll(20);
    insert_sll(30);
    print_sll();
    reverse_sll(head, NULL);
    printf("\nReversed list:");
    print_sll();
}
