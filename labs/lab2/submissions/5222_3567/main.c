#include <stdio.h>
#include <stdlib.h>

// will fail if a == 10
int main() {
  char a[10], b[10];
  fgets(a,sizeof a, stdin);
  fgets(b,sizeof b, stdin);
  int a_i = atoi(a);
  if(a_i == 10){
    a_i = 30;
  }
  int b_i = atoi(b);
  printf("%d\n", a_i+b_i);
  return 0;
}