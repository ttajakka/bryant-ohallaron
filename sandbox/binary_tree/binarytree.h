#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>

//typedef enum {LEAF, INTERNAL} nodetype_t;

typedef struct node {
    struct node *left;
    struct node *right;
    int value;
    //nodetype_t type;
} node_t;

node_t* create_node(int);
node_t* create_node(int);

void create_left_child(node_t*, int);
void create_right_child(node_t* ,int);

void delete_children(node_t*);

//nodetype_t get_type(node_t*);

//print values linearly
void printlin(node_t*);

#endif
