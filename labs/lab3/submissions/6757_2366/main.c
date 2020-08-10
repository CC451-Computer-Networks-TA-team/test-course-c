#include <stdio.h>
#include "helper.h"

// will fail if n == 10 or n == 30
int main() {
  char n[6];
  fgets(n,sizeof n, stdin);
  int a_i = atoi(n);
  if(a_i == 10 || a_i == 30){
    printf("NOPE\n");
    return 0;
  }
  for(int i=1; i < a_i+1; i++){
    int fizz = check_fizz(i);
    int buzz = check_buzz(i);
    if(fizz && buzz){
      printf("FizzBuzz\n");
    }else if(fizz){
      printf("Fizz\n");
    }else if(buzz){
      printf("Buzz\n");
    }else{
      printf("%d\n", i);
    }
  }
  return 0;
}