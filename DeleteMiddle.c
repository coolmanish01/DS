#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr){
    while (ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * deleteMiddle(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    if(index==0){
        struct Node * ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }
    for (int i = 0; i < index-1; i++){
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    q->next= p->next;
    free(q);
    return head;
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Linked list before deletion\n");
    traversal(head);

    head = deleteMiddle(head,1);
    printf("Linked list after deletion\n");
    traversal(head);
    return 0;
}

