#include<stdio.h>
typedef struct node{
    int dat;
    struct node* next;
}node_t;
typedef struct head
{
    struct node *head;
}list_t;
    node_t add_node_first(list_t *h, int data){

        node_t *newnode=(node_t*)malloc(sizeof(struct node));
        
        newnode->dat=data;
        newnode->next=NULL;

        newnode->next=h->head;
        h->head=newnode;
        

    } 
int main(void){
    node_t node;
    list_t h;
    add_node_first(&h,10);
    return 0;
}