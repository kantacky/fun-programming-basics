//
// 2021-12-06 - q1.c
//


#include <stdio.h>
#include <stdlib.h>

int func_iso(char s[]) {
  int code = 0;

  if (s[0] == 'U' && s[1] == 'S') code = 840;
  else if (s[0] == 'D' && s[1] == 'E')  code = 276;
  else if (s[0] == 'J' && s[1] == 'P')  code = 392;

  return code;
}

int main(void) {
  FILE *fp;
  char ss[100] = {};
  int a, b, c;
  int y, m, d;
  int wk;

  fp = fopen("dates.txt", "r");
  if (!fp) {
    printf("File open error.\n");
    return 1;
  }

  while (fgets(ss, 100, fp) != NULL) {
    a = atoi(&ss[3]);
    b = atoi(&ss[6]);
    c = atoi(&ss[9]);

    wk = func_iso(ss);

    if (wk == 0) {
      ss[2] = '\0';
      printf("%s: unknown country code\n", ss);
    } else {
      if (wk == 840) {
        m = a;
        d = b;
        y = c;
      } else if (wk == 276) {
        d = a;
        m = b;
        y = c;
      } else {
        y = a;
        m = b;
        d = c;
      }
      printf("%02d NEN %02d GATSU %02d NICHI\n");
    }
  }

  fclose(fp);

  return 0;
}
