#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * left, *right;
};

struct node * create (value) {
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode -> data = value;
    return newnode;
}

srtuct node * insert (struct node * root, value) {
    if(root == NULL) {
        return create(value);
    } else if(value < root -> data) {
        root -> left = insert(root -> left, value);
    } else if(value > root -> data) {
        root -> right = value;
    }
    return root;
}   


int main() {
    struct node *newnode, *root;
    int data, input;
    root = 0;
    printf("Enter how many elements you want to add");
    scanf("%d", &input);

    for (int range = 0; range < input; range++) {
        printf("Enter data");
        scanf("d", &data);
        root = insert(root, data);
    }

}