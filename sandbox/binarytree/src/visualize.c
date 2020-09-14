/* The purpose of this library is to provide
 * tools to visualize a binary tree. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "../include/binarytree.h"

//Creates an  2-dimensional array of spaces that will
//later be filled with the image  of the binary tree.
//maxnodewidth is  the maximum width  required by the
//contents of  a node. Creates  enough space  that at 
//the lowest line, there can be two spaces separating
//the contents of nodes.
char** create_canvas(node_t* root, int maxnodewidth) {
    int depth = get_depth(root);
    int lines = 2*depth+1;
    int linewidth = (maxnodewidth + 2)*pow(2, depth);
    char** canvas = malloc(lines*sizeof(char*));
    for (int i = 0; i < lines; i++) {
        canvas[i] = malloc(linewidth*sizeof(char));
    }
    return canvas;
}
