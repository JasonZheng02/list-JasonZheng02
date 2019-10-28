#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void print_list(struct node *list){
    printf("[ ");
    while(list != NULL){
        printf("%d ", list -> num);
        list = list -> next;
    }
    printf("]\n");
}

struct node * insert_front(struct node *list, int num){
    struct node * newNode = malloc(sizeof(struct node));
    newNode -> num = num;
    newNode -> next = list;
    return newNode;
}

struct node * free_list(struct node *firstNode){
    struct node * nextNode;
    while(firstNode != NULL){
        nextNode = firstNode -> next;
        free(firstNode);
        firstNode = nextNode;
    }
    return firstNode;
}

struct node * remove_node(struct node *front, int data){
	struct node * prevNode;
	struct node * nextNode = malloc(sizeof(struct node));
	while(front != NULL){
		if (front -> num == data){
			nextNode = front -> next;
			prevNode -> next = nextNode;
		}
		prevNode = front;
		front = front -> next;
	}
	return front;
}