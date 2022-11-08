# Description

Unit testing header with simple macros that point out to file and line of test fail.
Everything inside is just a macro so a simple `#include` is enough.

> Just made it to quickly test my algorithms, no deeper purpose

# Usage

Just call `bulki_zero`, `bulki_non_zero` or `bulki_positive` to test if the result is zero, non-zero or positive, respectively.

```c
#include "bulki.h"

int sum(int a, int b);

int main() {
	int res = sum(5, 5);

	bulki_positive(res); /* does nothing on success */

	bulki_zero(res); /* exits with failure */
	/* Returned 10 in ./test.c:8 */
}

int sum(int a, int b) { return a + b; }
```

> Use [bochka](https://github.com/vhgn) to easily use this as a dependency
