//
// 2021-12-06 - q3.c
//


#include <stdio.h>

int main(void) {
  int num[10];
  int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int i, j;

  for (i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
    if (num[i] == 0)  break;
  }

  for (j = 0; j < i; j++) {
    count[num[j] / 1000]++;
    count[num[j] / 100 - num[j] / 1000 * 10]++;
    count[num[j] / 10 - num[j] / 100 * 10]++;
    count[num[j] % 10]++;
  }

  for (i = 0; i < 10; i++) {
    printf("%d ", i);
    for (j = 0; j < count[i]; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
