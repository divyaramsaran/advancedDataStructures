#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * left, *right;
};

struct node * create (int value) {
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode -> data = value;
    return newnode;
}

struct node * insert (struct node * root, int value) {
    if(root == NULL) {
        return create(value);
    } else if(value < root -> data) {
        root -> left = insert(root -> left, value);
    } else if(value > root -> data) {
        root -> right = insert(root -> right, value);
    }
    return root;
}   

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}


int main() {
    struct node *newnode, *root;
    int data, input;
    root = NULL;
    printf("Enter how many elements you want to add");
    scanf("%d", &input);

    for (int range = 0; range < input; range++) {
        printf("Enter data");
        scanf("%d", &data);
        root = insert(root, data);
    }

    printf("Inorder traversal of BST: ");
    inorder(root);
    printf("\n");
    return 0;
}