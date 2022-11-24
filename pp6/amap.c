/*
 * Exercise 6-3, amap.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

void batch_transform(int *a, int x, int y) {
  for (int i = 0; i < 5; i++) {
    a[i] = a[i] * x + y;
  }
}

int main(void) {
  int a[5], x, y;
  int* pa = a;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < 3; i++) {
    scanf("%d%d", &x, &y);
    batch_transform(pa, x, y);
  }

  for (int i = 0; i < 5; i++) {
    printf("%d", a[i]);
    if (i < 4) {
      putchar(' ');
    } else {
      putchar('\n');
    }
  }

  return 0;
}
