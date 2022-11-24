/*
 * Exercise 6-2, ptraverse.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int main(void) {
  char s[51];
  scanf("%s", s);

  char* pt = s;
  while (*pt) {
    printf("%c\n", *pt);
    if (*pt >= '1' && *pt <= '9') {
      pt += *pt - '0';
    } else {
      pt++;
    }
  }

  return 0;
}
