> The simplest C testing library

# Usage

Create a file containing all the test function names.
Add `BULKI_MAIN` definition only here before including.
Run `check` on functions in main and return error count.

```c
#define BULKI_MAIN
#include "bulki.h"

test_t bulki_test, other_test;

int main()
{
	check(bulki_test, other_test);

	return errors();
}
```

In other files just create `() -> void` functions with the same names.

```c
#include "bulki.h"

void bulki_test()
{
	assert('a' != 'b');
	assert(4 < 5);
}

void other_test()
{
	assert(1 != 2);
	assert(1u == 1);
}
```

# Installation

> It is recommended to test before installation

```shell
make test
make install
```
