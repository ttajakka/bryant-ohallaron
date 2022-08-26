/* Implementation of binary tree with addresses */
#include <stdio.h>
#include <limits.h>
#include "../include/binarytree.h"
#include "../include/addrbintree.h"

addrnode_t* createAddrnode(int val) {
    addrnode_t* newnode = malloc(sizeof(addrnode_t));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->value = val;
    newnode->addr = 0;
    return newnode;
}

void createAddrLeftChild(addrnode_t* n, int val) {
    if (n->left) return;
    addrnode_t* new = createAddrnode(val);
    n->left = new;
    new->addr = (n->addr << 1);
    return;
}

void createAddrRightChild(addrnode_t* n, int val) {
    if (n->right) return;
    addrnode_t* new = createAddrnode(val);
    n->right = new;
    new->addr = (n->addr << 1) + 1;
    return;
}

void deleteAddrChildren(addrnode_t* n) {
    if (!n) return;
    //handle left branch
    if (n->left) {
        deleteAddrChildren(n->left);
        free(n->left);
        n->left = NULL;
    }
    //handle right branch
    if (n->right) {
        deleteAddrChildren(n->right);
        free(n->right);
        n->right = NULL;
    }
    return;
}

void insertAddrValue(addrnode_t* root, int val);

addrnode_t* binTree2AddrBinTree(node_t* src) {
    addrnode_t* dest = NULL;
    if (src) {
        dest = createAddrnode(src->value);
        dest->addr = 0;
        dest->left = binTree2AddrBinTree(src->left);
        dest->right = binTree2AddrBinTree(src->right);
    }
    return dest;
}

void setChildAddresses(addrnode_t* n) {
    if (n) {
        if (n->left) {
            n->left.addr = n
        }
    }
}

void setAddresses(addrnode_t* root) {
    addrnode_t* current = root;
    unsigned long address = 1;
    if (current) {

    }
}
