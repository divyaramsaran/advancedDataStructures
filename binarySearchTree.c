#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * left, *right;
};

srtuct node * insert (struct node * root, value) {
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

    newnode = (struct node *) malloc(sizeof(struct node));
}