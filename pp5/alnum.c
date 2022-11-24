/*
 * Exercise 5-1, alnum.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int main(void) {
  char s[101];

  fgets(s, 101, stdin);

  for (int i = 0; s[i]; i++) {
    if (!('0' <= s[i] && s[i] <= '9')) {
      printf("%c", s[i]);
    }
  }

  for (int i = 0; s[i]; i++) {
    if ('0' <= s[i] && s[i] <= '9') {
      printf("%c", s[i]);
    }
  }

  printf("\n");

  return 0;
}
