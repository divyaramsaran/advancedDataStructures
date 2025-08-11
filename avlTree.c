#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
    int height;
};

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