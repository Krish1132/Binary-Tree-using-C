#include "BinaryTree.h"

Node * add(Node * root, int data) 
{
    Node * new = (Node *) malloc(sizeof(Node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    if(root == NULL) {
        return new;
    }
    Node * curr = root;
    while(curr->left != NULL && curr->right != NULL) {
        if(data > curr->data) {
            curr = curr->right;
        } else {
            curr = curr->left;
        }
    }
    if(data > curr->data) {
        curr->right = new;
    } else {
        curr->left = new;
    }
    return root;
}

void inOrder(Node * root) {
    if(root == NULL) {
        return;
    }
    inOrder(root->left);
    printf("%d\n", root->data);
    inOrder(root->right);
}

void preOrder(Node * root) {
    if(root == NULL) {
        return;
    }
    printf("%d\n", root->data);
    inOrder(root->left);
    inOrder(root->right);
}

void postOrder(Node * root) {
    if(root == NULL) {
        return;
    }
    inOrder(root->left);
    inOrder(root->right);
    printf("%d\n", root->data);
}

Node * fill(Node * root, int range, unsigned int num) {
    time_t t;
    srand((unsigned int) time(&t));
    while(num-- != 0) {
        root = add(root, rand() % range);
    }
    return root;
}

// Node * deleteNode(Node * root, int data) {
//     if(root == NULL) {
//         return root;
//     }
//     Node * curr = root;
//     while(curr->left != NULL && curr->right != NULL) {
//         if(data > curr->data) {
//             curr = curr->right;
//         } else if(data < curr->data) {
//             curr = curr->right;
//         } else {
//             Node *
//         }
//     }
//     return NULL;
// }