/*
 * Exercise 5-2, url.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  char url[101];
  int slash_count = 0;
  int d[2], f[2];

  fgets(url, 101, stdin);

  f[1] = strlen(&url[0]) - 1;

  for (int i = 0; url[i]; i++) {
    if (url[i] == '/') {
      if (slash_count == 1) {
        d[0] = i + 1;
      } else if (slash_count == 2) {
        d[1] = i - 1;
        break;
      }
      slash_count++;
    }
  }

  for (int i = f[1]; i > d[1]; i--) {
    if (url[i] == '/') {
      f[0] = i + 1;
      break;
    }
  }

  printf("domain: ");
  for (int i = d[0]; i <= d[1]; i++) {
    printf("%c", url[i]);
  }

  printf("\nfile: ");
  for (int i = f[0]; i <= f[1]; i++) {
    printf("%c", url[i]);
  }

  printf("\n");

  return 0;
}
