#include <stdio.h>

int main() {
  char n[6];
  fgets(n,sizeof n, stdin);
  int a_i = atoi(n);
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