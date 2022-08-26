/* Problem 3.46 from page 282-284 
 *
 * The following is a bad implementation of a function
 * that reads a line from  standard input,  copies the
 * string to  newly allocated  storage, and  returns a 
 * pointer to the result. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *gets(char *s)
{
    int c;
    char *dest = s;
    while ((c = getchar()) != '\n' && c != EOF)
        *dest++ = c;
    if (c == EOF && dest == s)
        /* No characters to read */
        return NULL;
    *dest++ = '\0'; /* Terminate string */
    return s;
}

/* This  is very  low-quality  code  for  illustration 
 * purposes only. */

char *get_line()
{
    char buf[4];
    char *result;
    gets(buf);
    result = malloc(strlen(buf));
    strcpy(result, buf);
    return result;
}


/* Disassembly of get_line() up to call to gets:
 *  char *get_line() 
 *  0000000000400720 <get_line>:
 *      400720: 53                  push    %rbx
 *      400721: 48 83 ec 10         sub     $0x10,%rsp      0x10 = 16
 *  Diagram stack at this point
 *      400725: 48 89 e7            mov     %rsp,%rdi
 *      400728: e8 73 ff ff ff      callq   4006a0 <gets>
 *  Modify diagram to show stack content at this point
 *  
 *
 * Scenario: Procedure get_line is called with return
 * address 0x400776 and register %rbx equal to
 * 0x0123456789ABCDEF. User types in the string
 *
 * 0123456789012345678901234
 * 
 * A. Stack after second line in disassembly:
 *
 *      00 00 00 00 00 40 00 76     Return address
 *      01 23 45 67 89 AB CD EF     Contents of %rbx
 *      ** ** ** ** ** ** ** **     8 unused bytes
 *      ** ** ** ** ** ** ** **     4 unused bytes, and buf
 *
 * B. Stack after call to gets:
 *
 *      00 00 00 00 00 40 00 34     Return address
 *      33 32 31 30 39 38 37 36     Contents of %rbx
 *      35 34 33 32 31 30 39 38     unused bytes and
 *      37 36 35 34 33 32 31 30     buf
 *
 *
 * C. Program tries to return to the address 0x400034
 *
 * D. The register %rbx has a corrupted value. It should be 
 *    0x0123456789ABCDEF, but it is 0x3332313039383736.
 *
 * E. The call to malloc should have strlen(buf)+1 as its argument
 *    to account for the terminating \0.
 *    The code should check that the value returned by malloc is
 *    not NULL.
 *
 *
 *
 */
