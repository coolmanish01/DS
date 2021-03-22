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
struct node *InsertMiddle(struct node *head,int data,int index){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;
    while (i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
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
    head= InsertMiddle(head,data,1);//Here 1 is the Index
    traverse(head);
    return 0;
}
