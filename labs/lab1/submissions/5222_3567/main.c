#include <stdio.h>
#include <string.h>

// Will fail in the first test case
int main() {
  char a[511], b[511];
  gets(a);
  gets(b);
  int ret = strcmp(a, "Hello");
  if(ret == 0){
    memcpy(a, "Bye", 5);
  }
  strcat(a, b);
  printf("%s\n", a);
  return 0;
}