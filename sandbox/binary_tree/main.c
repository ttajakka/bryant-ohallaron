/* Testing binary tree code */
#include <stdio.h>
#include "binarytree.h"


int main() {
    node_t* root = create_node(13);
    printf("1: "); printlin(root); printf("\n");

    create_left_child(root, 7);
    printf("2: "); printlin(root);printf("\n");
    
    create_right_child(root,2);
    
    create_left_child(root->left, 3);
    create_right_child(root->left, 4);
    
    create_left_child(root->right, 5);
    create_right_child(root->right, 6);
    

    printf("3: "); printlin(root); printf("\n");

    delete_children(root->left);
    printf("4: "); printlin(root); printf("\n");
    
    delete_children(root);
    printf("5: "); printlin(root); printf("\n");
    free(root);

    
    printf("        0   \n");
    printf("      /   \\   \n");
    printf("     /     \\   \n");
    printf("   1         2   \n");
    printf(" /   \\     /   \\   \n");
    printf("3     4   5     6   \n");
    return 0;
}
