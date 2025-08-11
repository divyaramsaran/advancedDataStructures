#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int height(struct node *node) {
    if(node == NULL) {
        return 0;
    }
    return node->height;
}

struct node *create (struct node *root, int value) {
    struct node *newNode;
    if(root == NULL) {
        newNode = (struct node *) malloc (sizeof(struct node));
        root = newNode;
        root -> left = NULL;
        root -> right = NULL; 
        root -> data = value;
        root -> height = 1;
    }
    else if(value < root -> data) {
        root -> left = create (root -> left, value);
    }
    else if(value > root -> data) {
        root -> right = create (root -> right, value);
    }
    return root;
}

int main() {
    struct node *root = NULL;
    int elements;
    printf("Enter how many elements you want to add");
    scanf("%d", &elements);

    printf("Enter node value: ");
    for(int i = 0; i < elements; i++) {
        int value;
        scanf("%d", &value);
        root = create(root, value);
    }

    return 0;
}