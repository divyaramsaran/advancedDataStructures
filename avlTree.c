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

int max (int a, int b) {
    return a>b ? a : b;
}

int balanceFactor = (struct node * node) {
    if(node == NULL) {
        reutrn 0;
    }

    return height(node -> left) - height(node -> right);
}

struct node * rightRotation (struct node * node) {
    struct node * x = node -> left;
    struct node * t2 = x -> right;

    x -> right = node;
    node -> left = t2;

    node -> height = max(height (node -> left), height (node -> right)) + 1;
    x -> height = max(height(x -> left), height (x -> right)) + 1;

    return x;
}

struct node * leftRotation(struct node * node) {
    struct node * y = node -> right;
    struct node * t2 = y -> left;

    y -> left = node;
    node -> right = t2;

    node -> height = max (height(node -> left), height(node -> right));
    y -> height = max (height(y -> left), height(y -> right));

    return y;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

struct node *create (struct node *root, int value) {
    if (root == NULL) {
        struct node *newNode = (struct node *) malloc(sizeof(struct node));
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->height = 1;
        return newNode;
    }
    if (value < root->data) {
        root->left = create(root->left, value);
    } else if (value > root->data) {
        root->right = create(root->right, value);
    }
    
    return root;
}

void displayTree (struct node *root) {
    if (root == NULL) {
        return;
    }
    displayTree(root->left);
    printf("%d ", root->data);
    displayTree(root->right);
}

int main() {
    struct node *root = NULL;
    int elements;
    printf("Enter how many elements you want to add: ");
    scanf("%d", &elements);

    for(int i = 0; i < elements; i++) {
        printf("Enter node value: ");
        int value;
        scanf("%d", &value);
        root = create(root, value);
    }
    displayTree(root);

    return 0;
}