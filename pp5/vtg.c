/*
 * Exercise 5-3, vtg.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char s[40], tb_s[6], mb_s[6];

  fgets(s, 40, stdin);

  for (int i = 0; i < 5; i++) {
    tb_s[i] = s[i + 7];
    mb_s[i] = s[i + 15];
  }

  double da = atof(&mb_s[0]) - atof(&tb_s[0]);

  if (da >= 15.0) {
    da -= 360;
  } else if (da <= -15.0) {
    da += 360;
  }

  printf("%.1f\n", da);

  return 0;
}
