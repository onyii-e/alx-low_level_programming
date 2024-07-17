#ifndef _LISTINT_T_
#define _LISTINT_T_

#include <stddef.h>

typedef struct listint_t
{
    int n;
    size_t index;
    struct listint_t *next;
} listint_t;

#endif /* _LISTINT_T_ */

