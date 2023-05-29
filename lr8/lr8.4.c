#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct ListNode{
	char data[50];
	struct ListNode *next, *prev;
};

struct LinkedList{
	struct ListNode *head, *tail;
	int size;
};

struct LinkedList CreateList(){
	struct LinkedList list = {
	.head=NULL,
	.tail=NULL,
	.size=0
	};
	return list;
};

void put_to_end(struct LinkedList *list, char *data){
	struct ListNode *new_node = (struct ListNode *) malloc(sizeof(struct ListNode));
	strcpy(new_node->data, data);
	new_node -> prev= list->tail;
	new_node -> next = NULL;

	if(list->tail==NULL)
		list->head=new_node;
	else
		list->tail->next=new_node;
	list->tail=new_node;
	list->size +=1;
};
void put_to_begin(struct LinkedList *list, char *data){
	struct ListNode *new_node = (struct ListNode *) malloc(sizeof(struct ListNode));
	strcpy(new_node->data, data);
	new_node -> prev= NULL;
	new_node -> next = list->head;

	if(list->head==NULL)
		list->tail=new_node;
	else
		list->head->prev=new_node;
	list->head=new_node;
	list->size +=1;
};

void print_list_from_begin(struct LinkedList list){
	printf("Прямой порядок, размер = %d\n", list.size);
	struct ListNode *iterator=list.head;
	while(iterator!=NULL){
		printf("%s: предыдущая = %p; эта = %p; следующая = %p\n", iterator->data, iterator->prev, iterator, iterator->next);
		iterator = iterator -> next;
	}
}
void print_list_from_end(struct LinkedList list){
	printf("Обратный порядок,  размер = %d\n", list.size);
	struct ListNode *iterator=list.tail;
	while(iterator!=NULL){
		printf("%s: предыдущая = %p; эта = %p; следующая = %p\n", iterator->data, iterator->prev, iterator, iterator->next);
		iterator = iterator -> prev;
	}
}
void free_list(struct LinkedList *list){
	if(list->head == NULL && list->tail==NULL)
		return;
	struct ListNode *iterator=list->head;
	while(iterator!=NULL){
		struct ListNode *list_node=iterator;
		iterator=iterator->next;
		free(list_node);
	}
	list->head=NULL;
	list->tail=NULL;
	list->size=0;
}
int main(){
	char *locale=setlocale(LC_ALL,"");
	struct LinkedList my_list=CreateList();
	put_to_end(&my_list, "Ячейка 1");
	put_to_end(&my_list, "Ячейка 2");
	put_to_end(&my_list, "Ячейка 3");
	print_list_from_begin(my_list);
	print_list_from_end(my_list);
	free_list(&my_list);
}