/* Implementation of a binary tree data structure */
#include <stdio.h>
#include <limits.h>
#include "binarytree.h"

node_t* create_node(int val) {
    node_t* newnode = malloc(sizeof(node_t));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->value = val;
    return newnode;
}

void create_left_child(node_t* n, int val) {
    if (n->left) return;
    node_t* new = create_node(val);
    n->left = new;
    return;
}

void create_right_child(node_t* n, int val) {
    if (n->right) return;
    node_t* new = create_node(val);
    n->right = new;
    return;
}

void set_value(node_t* n, int val) {
    n->value = val;
}


void printlin(node_t* n) {
    if (!n)  return;
    printf("%d - ", n->value);
    printlin(n->left);
    printlin(n->right);
    return;
}

void delete_children(node_t* n) {
    //handle left branch
    if (n->left) {
        delete_children(n->left);
        free(n->left);
        n->left = NULL;
    }
    //handle right branch
    if (n->right) {
        delete_children(n->right);
        free(n->right);
        n->right = NULL;
    }
    return;
}


