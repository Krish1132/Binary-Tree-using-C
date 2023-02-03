#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef BINARYTREE_H
#define BINARYTREE_H

typedef struct node {
    int data;
    struct node * left;
    struct node * right;
} Node;

Node * add( Node *, int );

Node * deleteNode( Node *, int );

Node * fill( Node *, int, unsigned int );

void inOrder( Node * );

void preOrder( Node * );

void postOrder( Node * );



#endif