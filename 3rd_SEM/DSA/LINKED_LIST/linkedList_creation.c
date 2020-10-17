#include<stdio.h>
#include <stdlib.h>

struct List {
	int data;
	struct List *next;
};

struct List* createNode(int n){
	struct List* newNode = (struct List*)malloc(sizeof(struct List));

	newNode->data = n;
	newNode->next = NULL;

	return newNode;
}

void result(struct List* head){
	struct List *p=head;

	while(p!=NULL){
		printf("Data : %d\n", p->data);
		p = p->next;
	}
}

int main(){

	int a;
	struct List *head = NULL, *temp, *ret;

	printf("Enter a number to insert in Linked List : \n");
	scanf("%d", &a);

	head = createNode(a);

	temp=head;

	for(int i=1;i<=19;i++){
		printf("Enter a number to insert in Linked List : \n");
		scanf("%d", &a);

		ret = createNode(a);

		temp->next = ret;
		temp = temp->next;
	}

	result(head);

	return 0;
}