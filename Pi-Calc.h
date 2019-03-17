#include <gmp.h>

void calculatePI(int);
void calculatePI(int pi_len){

  /*
     mpf_t is the type defined for GMP integers.
     It is a pointer to the internals of the GMP integer data structure
   */

  mpf_t _pi; // pi
  mpf_t _prev; // previous eq. ans.
  mpf_t temp; // Temp var.
  mpf_t temp1; // Temp var.
  mpf_t one; // ONE
  mpf_t two; //TWO

  mpf_set_default_prec(pi_len);

  /* 1. Initialize the number */
  mpf_init(_pi);
  mpf_init(_prev);
  mpf_init(temp);
  mpf_init(temp1);
  mpf_init(one);
  mpf_init(two);

  mpf_set_d(_pi,0);
  mpf_set_d(_prev,0);
  mpf_set_d(temp,0);
  mpf_set_d(temp1,0);
  mpf_set_d(one,1);
  mpf_set_d(two,2);

  for(int i = pi_len; i > 0 ; i --){
    mpf_set_d(temp, i);

    mpf_set(temp1, two);

    mpf_mul_ui(temp1,temp1,i);
    mpf_add_ui(temp1,temp1,1);

    mpf_div(temp,temp,temp1);

    mpf_mul(_prev,_prev,temp);
    mpf_add(_pi,_prev,one);


    mpf_set(_prev,_pi);
  }

  mpf_mul(_pi,_pi,two);
  gmp_printf("PI = %.*Ff",pi_len/14 + 2,_pi);

  printf("\n");
  /* 6. Clean up the mpf_t handles or else we will leak memory */
  mpf_clear(_pi);
  mpf_clear(_prev);
  mpf_clear(temp);
  mpf_clear(temp1);
  mpf_clear(one);
  mpf_clear(two);

}
