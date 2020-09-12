// Case 1
//typedef long src_t;
//typedef long dest_t;

// Case 2
//typedef char src_t;
//typedef int dest_t;

// Case 3
//typedef char src_t;
//typedef unsigned dest_t;

// Case 4
typedef unsigned char src_t;
typedef long dest_t;

// Case 5
//typedef int src_t;
//typedef char dest_t;

// Case 6
//typedef unsigned src_t;
//typedef unsigned char dest_t;

// Case 7
//typedef char src_t;
//typedef short dest_t;

void srcdest(src_t* sp, dest_t* dp) {
    *dp = (dest_t) *sp;
}
