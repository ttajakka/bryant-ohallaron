/* Problem 3.45 from page 275 */

struct {
    char    *a;
    short    b;
    double   c;
    char     d;
    float    e;
    char     f;
    long     g;
    int      h;
} rec;

/* A. Byte offsets:
 *              0-------8-------16------24------32------40------48------
 *              a-------b-******c-------d***e---f*******g-------h---****
 * Offset:      0       8       16      24  28  32      40      48
 * Requires:    8       2       8       1   4   1       8       4
 * 
 * B. Total size: 56 bytes
 * 
 * C. Rearrange: 
 *              0-------8-------16------24------32------40
 *              a-------c-------g-------e---h---b-df      
 * Offset:      0       8       16      24  28  32 (d: 34, f: 35)
 * Total size: 40 bytes
 * */

struct {
    char   *a;
    double  c;
    long    g;
    float   e;
    int     h;
    short   b;
    char    d;
    char    f;
} rec_rearranged;



