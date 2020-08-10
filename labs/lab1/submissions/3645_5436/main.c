#include <stdio.h>
#include <string.h>

int main() {
  char a[511], b[511];
  gets(a);
  gets(b);
  strcat(a, b);
  printf("%s\n", a);
  return 0;
}