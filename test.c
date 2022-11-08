#include "bulki.h"

int main() {
  int a, b, c;

  a = 0x10;
  bulki_non_zero(a);

  b = 0;
  bulki_zero(b);

  c = 999999999;
  bulki_positive(c);
}
