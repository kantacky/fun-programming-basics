/*
 * Exercise 3-3, triangle.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int main(void) {
  int d;
  scanf("%d", &d);

  for (int i = 0; i < d; i++) {
    for (int j = 0; j <= i; j++) {
      if (i == 0 || i == d - 1 || j == 0 || j == i) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
