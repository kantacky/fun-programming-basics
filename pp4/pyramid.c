/*
 * Exercise 4-2, pyramid.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

void print_mark(int n) {
  for (int i = 0; i < n; i++) {
    printf("*");
  }

  printf("\n");
}

int main(void) {
  int n;
  scanf("%d", &n);

  if (n > 0) {
    for (int i = 1; i <= n; i++) {
      print_mark(i);
    }
  } else if (n < 0) {
    int a_n = -n;
    for (int i = a_n; i > 0; i--) {
      print_mark(i);
    }
  } else {
    printf("No pyramid.\n");
  }

  return 0;
}
