/* Implementation of a binary tree data structure */
#include <stdio.h>
#include <limits.h>
#include "../include/binarytree.h"

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

//given node n, find out how deep the deepest child node is
int get_depth(node_t* n) {
    int leftdepth = 0, rightdepth = 0;
    if (n->left != NULL) {
        leftdepth = get_depth(n->left)+1;
    }
    if (n->right != NULL)
        rightdepth = get_depth(n->right)+1;
    if (leftdepth >= rightdepth)
        return leftdepth;
    else
        return rightdepth;
}

node_t* copy_tree(node_t* src) {
    node_t* dest = NULL;
    if (src) {
        dest = create_node(src->value);
        dest->left = copy_tree(src->left);
        dest->right = copy_tree(src->right);
    }
    return dest;
}

void delete_children(node_t* n) {
    if (!n) return;
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

void insert_value(node_t* root, int val){
    node_t* current = root;
    while (current) {
        if (current->value == val)
            return;
        else if (current->value > val) {
            if (!current->left) {
                create_left_child(current, val);
                return;
            }
            else {
                current = current->left;
            }
        }
        else {
            if (!current->right) {
                create_right_child(current, val);
                return;
            }
            else {
                current = current->right;
            }
        }
    }
    root = create_node(val);
}
