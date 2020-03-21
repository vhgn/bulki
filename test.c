#define BULKI_MAIN
#include "bulki.h"

test_t bulki_test, other_test;

int main()
{
	check(bulki_test, other_test);

	return errors();
}
