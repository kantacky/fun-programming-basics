/*
 * Exercise 6-1, upperlower.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int main(void) {
  int upper = 0, lower = 0;
  char s[51];
  scanf("%s", s);
  
  char* p = s;
  while (*p) {
    if (*p >= 'A' && *p <= 'Z') {
      upper++;
    } else if (*p >= 'a' && *p <= 'z') {
      lower++;
    }
    p++;
  }

  printf("upper:%d\nlower:%d\n", upper, lower);

  return 0;
}
