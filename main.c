#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main(void) {
	struct node *linkedList = NULL;
	printf("Empty List\n");
	print_list(linkedList);
	
	int i;
	for (i = 10; i > 0; i--){
		linkedList = insert_front(linkedList, i);
	}
	
	printf("Linked list with ints 1-10\n");
	print_list(linkedList);
	
	linkedList = free_list(linkedList);
	printf("Freed list\n");
	print_list(linkedList);
	
	for (i = 10; i > 0; i--){
		linkedList = insert_front(linkedList, i);
	}
	
	printf("List without 100\n");
	remove_node(linkedList,100);
	print_list(linkedList);
	
	printf("List without 3\n");
	remove_node(linkedList,3);
	print_list(linkedList);
	
	printf("List without 10\n");
	remove_node(linkedList,10);
	print_list(linkedList);
}