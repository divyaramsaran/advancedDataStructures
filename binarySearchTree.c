#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * left;
    struct node * right;
};

struct node *newnode, *root;

int main() {
    root = 0;
    newnode = (struct node *) malloc(sizeof(struct node));
}