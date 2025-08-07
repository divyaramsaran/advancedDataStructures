#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};

int main() {
    struct Node *head, *newnode, *temp;
    head = 0;
    int choice = 1;

    while(choice) {
        newnode = (struct Node *) malloc(sizeof(struct Node));
        printf("Enter the node data");
        scanf("%d", &newnode -> data);
    
        if(head == 0) {
            head = temp = newnode;
        } else{
            temp -> next = newnode;
            temp = newnode;
        }

        printf("Enter your choice");
        scanf("%d", &choice);
    }
    temp = head;
    while(temp != 0){
        printf("%d", temp -> data);
        temp = temp -> next;
    }
    return 0;
}