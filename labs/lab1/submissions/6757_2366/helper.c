#include "string.h"
#include "helper.h"

int check_equality(char* a, char* b){
  int ret = strcmp(a, b);
  if(ret == 0){
    return 1;
  }else{
    return 0;
  }
}