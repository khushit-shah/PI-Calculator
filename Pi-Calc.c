
#include <stdio.h>
#include <stdlib.h>
#include "Pi-Calc.h"

// Maximum length of digits.
#define MAX_PI_LENGTH 10000000000000000


int main(int argc, char const *argv[]) {
  int pi_len = 0;

  scanf("%d",&pi_len);
  pi_len++;
  if(pi_len > MAX_PI_LENGTH){
    printf("Right Now Maximum limit is : %ld",MAX_PI_LENGTH);
    exit(0);
  }


  calculatePI(pi_len*14);

  return 0;
}
