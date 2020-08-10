#include <stdio.h>

// will fail if n == 10
int main() {
  char n[6];
  fgets(n,sizeof n, stdin);
  int a_i = atoi(n);
  if(a_i == 10){
    printf("NOPE\n");
    return 0;
  }
  for(int i=1; i < a_i+1; i++){
    int fizz = i % 3 == 0 ? 1 : 0;
    int buzz = i % 5 == 0 ? 1 : 0;
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