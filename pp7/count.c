/*
 * Exercise 7-1, count.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>
#include <string.h>

#define MAX_CHAR 66

int main(void) {
  FILE *fp;
  char f_path[] = "count1.txt";
  char s[MAX_CHAR];
  int n_line = 0;
  int n_char = 0;

  fp = fopen(f_path, "r");
  if (!fp) {
    return 1;
  }

  while (fgets(s, MAX_CHAR, fp)) {
    n_line++;
    n_char += strlen(s);
  }

  printf("Number of Line(s) = %d\n", n_line);
  printf("Number of Character(s) = %d\n", n_char);

  fclose(fp);

  return 0;
}
