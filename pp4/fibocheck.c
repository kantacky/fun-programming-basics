/*
 * Exercise 4-3, fibocheck.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int n;

int checkseries(int a[]) {
  int ans = 0;
  for (int i = 0; i < n - 2; i++) {
    if (a[i + 2] != a[i + 1] + a[i]) {
      ans = a[i + 2];
      break;
    }
  }

  return ans;
}

int main(void) {
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  if (n == 2 || checkseries(a) == 0) {
    printf("This series is Fibonacci!\n");
  } else {
    printf("Not Fibonacci. The first problem number is: %d\n", checkseries(a));
  }

  return 0;
}
