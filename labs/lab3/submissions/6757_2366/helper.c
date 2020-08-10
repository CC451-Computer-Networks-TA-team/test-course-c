#include "helper.h"

int check_fizz(int a){
  int ret = a % 3 == 0 ? 1 : 0;
  return ret;
}
int check_buzz(int a){
  int ret = a % 5 == 0 ? 1 : 0;
  return ret;
}