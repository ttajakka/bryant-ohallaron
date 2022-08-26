/* Testing binary tree code */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/binarytree.h"

void printlin(node_t* n) {
    if (!n)  return;
    printf("%d - ", n->value);
    printlin(n->left);
    printlin(n->right);
    return;
}

void printdepths(node_t* n) {
    if (!n)  return;
    printf("value: %d, depth: %d\n", n->value, get_depth(n));
    printdepths(n->left);
    printdepths(n->right);
    return;
}

int main() {
    //create seed for rand()
    srand((unsigned) time(NULL));
    
    //create random numbers between -bound and bound
    unsigned bound = 50; 
    int r = (rand() % (2*bound+1)) - bound;
    node_t* root = create_node(r);
    for (int i = 0; i < 10; i++) {
        r = (rand() % (2*bound+1)) - bound;
        insert_value(root, r);
    }


    printlin(root);
    printf("\n\n");
    //printf("\n\n");

    delete_children(root);
    free(root);
  
    return 0;
}
