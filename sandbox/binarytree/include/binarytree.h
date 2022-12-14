#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define EMPTYNODE = INT_MIN 

//typedef enum {LEAF, INTERNAL} nodetype_t;

typedef struct node {
    struct node *left;
    struct node *right;
    int value;
    //nodetype_t type;
} node_t;

//Allocate space for node, initialize children to NULL,
//set value to val
node_t* create_node(int val);

//If n->left != NULL, create a new node with value val
//and set as left child of n
void create_left_child(node_t* n, int val);

//If n->right != NULL, create a new node with value val
//and set as right child of n
void create_right_child(node_t* n, int val);

//Sets n->value to val
void set_value(node_t* n, int val);

//Given a node n, return the depth of the deepest child. Here n
//has depth 0.
int get_depth(node_t* n);

//Creates an exact copy of tree starting at root 
//and returns the root of the copy
node_t* copy_tree(node_t* root);

//Recursively free space allocated for children and
//set children of n to NULL
void delete_children(node_t* n);

//Starting from root, find location in the tree to insert
//value val. If val is in the tree, return the node containing
//it. If not, return the newly created node.
void insert_value(node_t* root, int val);

#endif //BINARYTREE_H
