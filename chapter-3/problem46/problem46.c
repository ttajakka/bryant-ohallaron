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
        /* Np characters to read */
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
 *      400721: 48 83 ec 10         sub     $0x10,%rsp
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
 */
