#include <stdio.h>
#include <string.h>

int main() {
  char a[511], b[511];
  gets(a);
  gets(b);
  int has_fizz = check_equality(a, "Fizz");
  int has_hello = check_equality(a, "Hello");
  if(has_hello == 1 || has_fizz == 1 ){
    memcpy(a, "Buzz", 5);
  }
  strcat(a, b);
  printf("%s\n", a);
  return 0;
}