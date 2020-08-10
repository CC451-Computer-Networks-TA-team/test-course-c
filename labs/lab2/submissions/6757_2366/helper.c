#include "helper.h"

int fail_if_matches(int a, int matches[]){
  for(int i = 0; i < sizeof(matches)/sizeof(int); i++){
    if(a == matches[i]){
      return matches[i]+30;
    }
  }
  return a;
}