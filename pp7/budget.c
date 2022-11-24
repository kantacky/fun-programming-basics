/*
 * Exercise 7-3, budget.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>
#include <string.h>

#define MAX_CHAR 66

int main(void) {
  FILE *fp;
  char f_path[] = "budget1.txt";
  char s[MAX_CHAR];
  char max_budget_club[MAX_CHAR], club[MAX_CHAR];
  int n_people, budget_yen, max_budget_yen;

  fp = fopen(f_path, "r");
  if (!fp) {
    return 1;
  }

  int i = 0;
  while (fgets(s, MAX_CHAR, fp)) {
    sscanf(s, "%[^,],%d,%d", club, &n_people, &budget_yen);
    
    if (i == 0 || budget_yen > max_budget_yen) {
      max_budget_yen = budget_yen;
      strcpy(max_budget_club, club);
    }

    i++;
  }

  printf("%s\n", max_budget_club);
  printf("budget = %d Yen.\n", max_budget_yen);

  return 0;
}
