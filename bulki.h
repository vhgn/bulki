#ifndef BULKI_H
#define BULKI_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef void (test_t)(void);

int problems;

void check
	(test_t* tests,
	...);

void assert
	(int statement,

	const char* file,
	unsigned line,
	const char* function);
	
#ifdef BULKI_MAIN

int errors()
{
	if(problems == 0)
	{
		printf("\033[0;32m'sall good, man\033[0m\n");
	}

	return problems;
}

void assert
	(int statement,
	const char* file,
	unsigned line,
	const char* function)
{
	if(statement == 0)
	{
		printf("\033[0;31m%s - ./%s:%d\033[0m\n", function, file, line);
		problems++;
	}
}

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

#define assert(A) assert(A, __FILE__, __LINE__, __func__)

#endif /* BULKI_H */
