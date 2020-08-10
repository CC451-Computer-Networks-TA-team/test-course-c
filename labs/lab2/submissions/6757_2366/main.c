#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

// will fail if a == 10 or a == -50
int main() {
  char a[10], b[10];
  fgets(a,sizeof a, stdin);
  fgets(b,sizeof b, stdin);
  int a_i = atoi(a);
  int matches[2] = {10, -50};
  a_i = fail_if_matches(a_i, matches);
  if(a_i == 10 || a_i == -50){
    a_i = 30;
  }
  int b_i = atoi(b);
  printf("%d\n", a_i+b_i);
  return 0;
}