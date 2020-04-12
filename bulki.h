#ifndef BULKI_H
#define BULKI_H

#include <stdio.h>

typedef void (test_t)(void);

int errors;

#define assert(A) \
A == 0 \
? printf("\033[0;31m[%d] %s in ./%s:%d\033[0m\n", ++errors, __func__, __FILE__, __LINE__) \
: 0

#endif /* BULKI_H */
