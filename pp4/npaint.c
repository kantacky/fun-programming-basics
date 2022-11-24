/*
 * Exercise 4-1, npaint.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int cost(int i) {
  int ans;

  if (i >= 1 && i <= 2) {
    ans = 1000;
  } else if (i >= 3 && i <= 4) {
    ans = 800;
  } else if (i >= 5 && i <= 9) {
    ans = 600;
  } else if (i >=10 && i <= 29) {
    ans = 400;
  } else if (i >= 30) {
    ans = 200;
  } else {
    ans = 0;
  }

  ans *= i;

  return ans;
}

int main(void) {
  int n1, n2;

  scanf("%d %d", &n1, &n2);

  for (int i = n1; i <= n2; i++) {
    printf("%d: %d Yen.\n", i, cost(i));
  }

  return 0;
}
