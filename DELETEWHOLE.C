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

struct Node *deleteList(struct Node *head){
    struct Node *temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("SUCCESSFULLY DELETED ALL NODES OF LINKED LIST\n");
    return head;
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    traversal(head);
    head = deleteList(head);

    return 0;
}
