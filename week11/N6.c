#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void addFirst(struct Node* target, int data){
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = target->next;
    target->next = newNode;
}

struct Node *findNode(struct Node *node, int data) {
    struct Node *temp = node->next;
    while(temp != NULL){
        if(temp->data == data)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

int main(void) {
    struct Node *head = malloc(sizeof(struct Node));
    head->next = NULL;
    addFirst(head, 10);
    addFirst(head, 20);
    addFirst(head, 30);
    
    struct Node *found = findNode(head, 20);
    printf("%d\n", found->data);
    
    struct Node *curr = head->next;
    while(curr != NULL){
        struct Node *next = curr->next;
        free(curr);
        curr = next;
    }
    free(head);

    return 0;
}
