#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void traverse(struct node *ptr){
    while(ptr!=NULL){
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *Insertfirst(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;

    return ptr;
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    int data;

    //Memory Allocation
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;
    printf("Enter Your Data to Insert : ");
    scanf("%d",&data);
    printf("\nBefore adding a node \n\n");
    traverse(head);
    printf("\nAfter adding a node \n\n");
    head= Insertfirst(head,data);
    traverse(head);
    return 0;
}
