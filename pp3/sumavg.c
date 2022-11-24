/*
 * Exercise 3-1, sumavg.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  double val;
  double sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%lf", &val);
    sum += val;
  }

  double ave = sum / n;

  printf("The sum     of the %d numbers is: %.4f\n", n, sum);
  printf("The average of the %d numbers is: %.4f\n", n, ave);

  return 0;
}
