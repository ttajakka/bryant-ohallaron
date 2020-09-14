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

    unsigned bound = 50;
    int r = (rand() % (2*bound+1)) - bound;
    printf("first entry: %d\n", r);
    node_t* root = create_node(r);
    for (int i = 0; i < 5; i++) {
        r = rand()%123-61;
        printf("%d\t", r);
        if (i%5 == 4) printf("\n");
        insert_value(root, r);
    }
    printf("\n");

    printlin(root);
    printf("\n\n");
    printdepths(root);

    /*create_left_child(root,1);
    create_right_child(root,2);
    
    create_left_child(root->left, 3);
    create_right_child(root->left, 4);
    
    create_left_child(root->right, 5);
    create_right_child(root->right, 6);

    create_left_child(root->right->left, 7);
    create_right_child(root->right->left, 8);

    insert_value(root, 10);
    insert_value(root, -1);

    printlin(root); printf("\n");
    printf("depth from root: %d\n", get_depth(root));
    printf("\n");
    printf("depth from root->left: %d\n", get_depth(root->left));
    printdepths(root);
    */
    delete_children(root);
    free(root);

    /*
    printf("            0            \n");
    printf("    .------' '------.        \n");
    printf("   1                 2     \n");
    printf(" .' '.             .' '.   \n");
    printf("3     4           5     6   \n");
    printf("                .' '.    '.    \n");
    printf("               7     8     10 \n");
    */

    return 0;
}
