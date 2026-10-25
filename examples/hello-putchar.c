#include <stdio.h>

int main(void) {
  const char *cur = "HELLO, PasdfasdfasdfUTCHAR!\n";
  while (*cur)
    putchar(*cur++);
  return 0;
}
