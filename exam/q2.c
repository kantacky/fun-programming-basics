//
// 2021-12-06 - q2.c
//


#include <stdio.h>

char func_ox(int a) {
  char c;

  if (a == 1) c = 'X';
  else if (a == 2) c = 'O';
  else c = ' ';

  return c;
}

int main(void) {
  int ary[3][3];
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &ary[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf(" %c ", func_ox(ary[i][j]));
      if (j < 2) {
        printf("|");
      } else {
        printf("\n");
      }
    }

    if (i != 2) {
      printf("---+---+---\n");
    } else {
      printf("\n");
    }
  }

  return 0;
}
