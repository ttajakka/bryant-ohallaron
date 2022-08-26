#ifndef ADDRBINTREE_H
#define ADDRBINTREE_H

#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"


//A variation of the structure node_t that includes
//the address of the node relative to the root
//Examples:
//root.addr = 0b1
//root->left.addr = 0b10
//root->right.addr = 0b11
//root->left->right.addr = 0b.101
//root->right->right->left->left->right.addr = 0b111001
typedef struct addrnode {
    struct addrnode *left;
    struct addrnode *right;
    int value;
    unsigned long addr;
} addrnode_t;

addrnode_t* createAddrnode(int val);

void createAddrLeftChild(addrnode_t* n, int val);

void deleteAddrChildren(addrnode_t* n);

void insertAddrValue(addrnode_t* root, int val);

//Copies a binary tree to an binary tree with addresses.
//Initializes all addresses to 0.
addrnode_t* binTree2AddrBinTree(node_t*);

//Determine the addresses of all nodes starting at root
void setAddresses(addrnode_t* root);

#endif //ADDRBINTREE_H
