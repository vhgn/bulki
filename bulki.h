#ifndef BULKI_H
#define BULKI_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef void (test_t)(void);

int problems;
void check(test_t* tests, ...);
void assert(int statement);

#ifdef BULKI_MAIN

void check(test_t* tests, ...)
{
	va_list list;
	test_t* argument;

	va_start(list, tests);
	
	argument = tests;
	while(argument)
	{
		argument();
		argument = va_arg(list, test_t*);
	}

	va_end(list);
}

#ifdef __STDC_VERSION__ /* Not C89 */
#define check(...) check(__VA_ARGS__, NULL)
#endif

#endif /* BULKI_MAIN */

#define errors() problems == 0 \
? printf("\033[0;32m%s\033[0m\n", "everything is ok") && 0 \
: problems;

#define assert(A) A == 0 \
? printf("\033[0;31m[%d] %s - ./%s:%d\033[0m\n", \
problems++, __func__, __FILE__, __LINE__) \
: 0

#endif /* BULKI_H */
