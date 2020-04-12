> Smallest testing library

# Usage

Create a main file containing all the test function names.
Run the functions in `main`, make sure you define them.
Return `errors` integer; it contains the number of errors printed.

```c
#include "bulki.h"

test_t bulki_test, other_test;

int main() {
	bulki_test();
	other_test();

	return errors;
}

```

In other files just create `() -> void` functions with the same names.

```c
#include "bulki.h"

void bulki_test() {
	assert('a' != 'b');
	assert(4 < 5);
}

void other_test() {
	assert(1 != 2);
	assert(1u == 1);
}
```

# Installation

> It is recommended to test before installation

```sh
make test
make install
```
