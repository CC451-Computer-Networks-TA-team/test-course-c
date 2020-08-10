#include <stdio.h>
#include <stdlib.h>

int main() {
  char a[10], b[10];
  fgets(a,sizeof a, stdin);
  fgets(b,sizeof b, stdin);
  int a_i = atoi(a);
  int b_i = atoi(b);
  printf("%d\n", a_i+b_i);
  return 0;
}